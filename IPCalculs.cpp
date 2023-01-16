#pragma once

#include <iostream>
#include "IPClass.h"
#include <cstdlib>
#include <bitset>
#include <vector>

IP currentIp = IP(0, 0, 0, 0, '0', 0);
int xNetworks, bitsToAddOnMask, subnetToCheckId;
int i;
std::string networkAdress, firstAdress, lastAdress, broadcastAdress;

//-----IP
#pragma region IP
void SetupNewIP()
{
	char newIPClass = RandomIPClass();

	//Generate a new IP Adress (not optimized at all)
	bool isDefault = IsDefaultMask();
	int oct0 = 0, oct1 = 0, oct2 = 0, oct3 = 0;
	int mask = 0;
	switch (newIPClass)
	{
	case 'A':
		oct0 = rand() % 127 + 1;
		mask = isDefault ? 8 : rand() % 5 + 8;
		if (mask + bitsToAddOnMask == 14) mask--;
		break;

	case 'B':
		oct0 = rand() % 63 + 128;
		oct1 = RandomBit();
		if (oct0 != 191)
		{
			oct2 = RandomBit();
			oct3 = RandomBit();
		}
		mask = isDefault ? 16 : rand() % 5 + 16;
		break;

	case 'C':
		oct0 = rand() % 31 + 192;
		oct1 = RandomBit();
		if (oct0 != 223)
		{
			oct2 = RandomBit();
			oct3 = RandomBit();
		}
		mask = isDefault ? 24 : rand() % 4 + 24;
		if (mask + bitsToAddOnMask == 22) mask--;
	}

	currentIp = IP(oct0, oct1, oct2, oct3, newIPClass, mask); //Update to the new IP adress
	//currentIp = IP(193, 1, 1, 0, 'C', 24); //DEBUG
	//currentIp = IP(122, 0, 0, 0, 'A', 10); //DEBUG

	xNetworks = rand() % 6 + 2;
	bitsToAddOnMask = SetBitsToAddOnMask();
	subnetToCheckId = rand() % (xNetworks - 1);

	std::cout << "Nouvelle Adresse IP Generee : " << currentIp.IPstring() << "\n"
		<< "Type adresse : " << GetIPType() << "\n"
		<< "Routable ? : " << IsIpRoutable() << "\n"
		<< "Classe de l'ip : " << GetIpClass() << "\n \n"
		<< "Nouveau mask : " << GetNewMask() << "\n"
		<< "mask en / : " << GetNewMaskCidr() << "\n \n"
		<< "Sous Reseau # : " << GetTargetSubNetwork() << "\n \n \n";

	SetupSubNetworkAdresses();

	srand(time(0)); //Random seed
}

std::string GetIPToString()
{
	return currentIp.IPstring();
}
#pragma endregion

//------IP class
#pragma region IpClass
char RandomIPClass()
{
	int x = rand() % 2;
	switch (x)
	{
	default: return 'A';
	case 1: return 'B';
	case 2: return 'C';
	}
}

char GetIpClass()
{
	return currentIp.GetIpClass();
}
#pragma endregion

//-------IP Type (0: Reseau, 1: Machine, 2: Broadcast)
#pragma region IPType
std::string GetIpTypeCorrespondance(int id)
{
	switch (id)
	{
	case 1: return "Machine";
	case 2: return "Broadcast";
	default: return "Réseau";
	}
}

int GetIPType()
{
	int ipType = 1; //0: Reseau, 1: Machine, 2: Broadcast

	int bitOfMaskEnd = currentIp.GetMaskCidr() / 8;
	int xBitInByte = currentIp.GetMaskCidr() % 8;

	int bitToCheck = 4 - bitOfMaskEnd;
	int totalBit = 8 * bitToCheck;

	//Convert host part into binary
	std::string ipHostBinary = "";
	for (i = 0; i < bitToCheck; i++)
	{
		ipHostBinary += std::bitset<8>(currentIp.octet(bitOfMaskEnd + i)).to_string();
	}

	//Check each bit
	int xBit0 = 0, xBit1 = 0;
	for (i = bitOfMaskEnd; i < totalBit; i++)
	{
		if (ipHostBinary[i] == '0') xBit0++;
		else xBit1++;
	}
	if (xBit0 == totalBit - bitOfMaskEnd) ipType = 0; //check if full host bits at 0
	else if (xBit1 == totalBit - bitOfMaskEnd) ipType = 2; //check if full host bits at 1

	return ipType;
}

//0: Private network, 1: routable
int IsIpRoutable()
{
	int isIt = 1; //0: Private network, 1: routable

	switch (currentIp.GetIpClass())
	{
	case 'A':
		if (currentIp.octet(0) == 10) //10.0.0.0 à 10.255.255.255
			isIt = 0;
		break;

	case 'B':
		if (currentIp.octet(0) == 172 && currentIp.octet(1) >= 16 && currentIp.octet(1) <= 31) //172.16.0.0 à 172.31.255.255
			isIt = 0;
		break;

	case 'C':
		if (currentIp.octet(0) == 192 && currentIp.octet(1) == 168) //192.168.0.0 à 192.168.255.255
			isIt = 0;
	}

	return isIt;
}
#pragma endregion

//-------MASK
#pragma region Mask
int GetIPMask()
{
	return currentIp.GetMaskCidr();
}

bool IsDefaultMask()
{
	return rand() % 2 == 0;
}

int SetBitsToAddOnMask()
{
	int x = 3;
	if (xNetworks == 2) x = 1;
	else if (xNetworks <= 4) x = 2;
	return x;
}

int GetNewMaskCidr()
{
	return currentIp.GetMaskCidr() + bitsToAddOnMask;
}

std::string GetNewMask()
{
	int cidr = GetNewMaskCidr();

	//CIDR mask to dot notation
	std::string newMask = "";
	unsigned int mask = 0xffffffffu << (32 - cidr); //add 32-cidr bit 0 from the right

	for (int i = 3; i >= 0; i--)
	{
		int x = (mask >> (8 * i)) % 256;
		newMask += std::to_string(x);
		if (i > 0) newMask += ".";
	}
	return newMask;
}
#pragma endregion

//-------Subnet
#pragma region Subnet
int GetXNetwork()
{
	return xNetworks;
}

void SetupSubNetworkAdresses()
{
	//Get IP in bin & Mask
	std::string ipBinary[4];
	for (i = 0; i < 4; i++)
		ipBinary[i] = std::bitset<8>(currentIp.octet(i)).to_string();

	int mask = GetNewMaskCidr();

	//Get informations about what to calcul next
	int bitInNet = 32 - mask;
	int xByteToModify = 1 + bitInNet / 8;
	int subNet = ((currentIp.GetMaskCidr() + 1) % 8) - 1;//bitInNet - ((bitInNet / 8) * 8) - bitsToAddOnMask;
	if (subNet < 0)
	{
		xByteToModify--;
		subNet = 8 + subNet - 1;
	}

	//Set the subnet to the Xth subnet choosen for the exercise
	std::vector<char> subnetBin = SubnetBinary();
	for (int i = 0; i < bitsToAddOnMask; i++)
		ipBinary[4 - xByteToModify][subNet + i] = subnetBin[i];

	//Set net at 0 to get network
	for (i = (subNet + bitsToAddOnMask); i < 8; i++)
		ipBinary[4 - xByteToModify][i] = '0';
	for (i = 4 - xByteToModify + 1; i < 4; i++)
		for (int j = 0; j < 8; j++)
			ipBinary[i][j] = '0';

	networkAdress = BinaryToDotNotation(ipBinary[0], ipBinary[1], ipBinary[2], ipBinary[3]);

	//Add one to get 1rst adress 
	ipBinary[3][7] = '1';
	firstAdress = BinaryToDotNotation(ipBinary[0], ipBinary[1], ipBinary[2], ipBinary[3]);

	//Set net at 1 to get broadcast
	for (i = subNet + bitsToAddOnMask; i < 8; i++)
		ipBinary[4 - xByteToModify][i] = '1';
	for (i = 4 - xByteToModify + 1; i < 4; i++)
		for (int j = 0; j < 8; j++)
			ipBinary[i][j] = '1';
	broadcastAdress = BinaryToDotNotation(ipBinary[0], ipBinary[1], ipBinary[2], ipBinary[3]);

	//Remove one to get last adress 
	ipBinary[3][7] = '0';
	lastAdress = BinaryToDotNotation(ipBinary[0], ipBinary[1], ipBinary[2], ipBinary[3]);
}

int GetTargetSubNetwork()
{
	return subnetToCheckId;
}

std::string GetSubnetAdress(int id)
{
	switch (id)
	{
	default: return networkAdress;
	case 1: return broadcastAdress;
	case 2: return firstAdress;
	case 3: return lastAdress;
	}
}
#pragma endregion

//bits Maths
int RandomBit()
{
	return rand() % 255;
}

std::vector<char> SubnetBinary()
{
	switch (subnetToCheckId)
	{
	case 1: return { '0', '0', '1' };
	case 2: return { '0', '1', '0' };
	case 3: return { '0', '1', '1' };
	case 4: return { '1', '0', '0' };
	case 5: return { '1', '0', '1' };
	case 6: return { '1', '1', '0' };
	case 7: return { '1', '1', '1' };
	default: return { '0', '0', '0' };
	}
}

std::string BinaryToDotNotation(std::string oct0, std::string oct1, std::string oct2, std::string oct3)
{
	int binSum = 0;
	std::vector<std::string> octs = { oct0, oct1, oct2, oct3 };

	std::string transformedIP = "";
	for (i = 0; i < 4; i++)
	{
		for (int j = 0; j < 8; j++)
		{
			if (octs[i][j] == '1') binSum += 128 / pow(2, j);
		}
		transformedIP += std::to_string(binSum);
		if (i < 3) transformedIP += ".";
		binSum = 0;
	}

	return transformedIP;
}



