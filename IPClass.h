#pragma once
#include <iostream>
#include <sstream>

class IP {
private :

	char className;
	int octets[4];
	int cidrMask;

public :
	
	IP(int oct0, int oct1, int oct2, int oct3, char ipClass, int mask)
	{
		octets[0] = oct0;
		octets[1] = oct1;
		octets[2] = oct2;
		octets[3] = oct3;
		className = ipClass;
		cidrMask = mask;
	}

	std::string IPstring()
	{
		std::stringstream s;
		s << octets[0] << "." << octets[1] << "." << octets[2] << "." << octets[3];
		std::string str = s.str();
		return str;
	}

	int octet(int id)
	{
		return octets[id];
	}

	int GetMaskCidr()
	{
		return cidrMask;
	}

	char GetIpClass()
	{
		return className;
	}
};

