#pragma once

#include <iostream>
#include "IPClass.h"
#include <cstdlib>

IP currentIp = IP(0, 0, 0, 0, '0', 0);
int xNetworks;

char RandomIPClass()
{
	int x = rand() % 2;
	switch (x)
	{
		case 0: return 'A';
		case 1: return 'B';
		case 2: return 'C';
	}
}

int RandomBit()
{
	return rand() % 255;
}

bool IsDefaultMask()
{
	return rand() % 2 == 0;
}

void SetupNewIP()
{
	srand(time(NULL)); //Random seed

	char newIPClass = RandomIPClass();

	//Generate a new IP Adress (not optimized at all)
	int oct0 = 0, oct1 = 0, oct2 = 0, oct3 = 0;
	int mask = 0;
	switch (newIPClass)
	{
		case 'A': 
			oct0 = rand() % 127 + 1; 
			mask = IsDefaultMask() ? 8 : rand() % 15 + 8;
			break;

		case 'B': 
			oct0 = rand() % 191 + 128; 
			oct1 = RandomBit();
			if (oct0 != 191)
			{
				oct2 = RandomBit();
				oct3 = RandomBit();
			}
			mask = IsDefaultMask() ? 16 : rand() % 23 + 16;
			break;

		case 'C':
			oct0 = rand() % 223 + 192;
			oct1 = RandomBit();
			if (oct0 != 223)
			{
				oct2 = RandomBit();
				oct3 = RandomBit();
			}
			mask = IsDefaultMask() ? 24 : rand() % 31 + 24;
	}

	currentIp = IP(oct0, oct1, oct2, oct3, newIPClass, mask); //Update to the new IP adress
	xNetworks = rand() % 8 + 2;
}

std::string GetIPToString()
{
	return currentIp.IPstring();
}

int GetIPMask()
{
	return currentIp.GetMaskCidr();
}

int GetXNetwork()
{
	return xNetworks;
}
