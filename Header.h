#pragma once

#include <iostream>
#include <vector>

//IP Main
void SetupNewIP();

//IP Class
char RandomIPClass();

char GetIpClass();

//IP Type
std::string GetIPToString();

int GetIPType();

std::string GetIpTypeCorrespondance(int id);

int IsIpRoutable();

//IP Sbnet
int GetXNetwork();

void SetupSubNetworkAdresses();

std::string GetSubnetAdress(int id);

int GetTargetSubNetwork();

//Mask
int GetIPMask();

bool IsDefaultMask();

int GetNewMaskCidr();

std::string GetNewMask();

//Bits Maths
int SetBitsToAddOnMask();

int RandomBit();

std::vector<char> SubnetBinary();

std::string BinaryToDotNotation(std::string oct0, std::string oct1, std::string oct2, std::string oct3);

