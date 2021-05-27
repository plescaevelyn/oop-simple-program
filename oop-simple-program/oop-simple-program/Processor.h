#pragma once
#include "PcUnit.h"
#include <iostream>
#include <string>

class Processor :
	public PcUnit
{
public:
	void setSocket(std::string socket);
	std::string getSocket();
	void setFrequency(float frequency);
	float getFrequency();
	void setPrice(float price);
	float getPrice();
	void displayPrice(float price);

	Processor() : socket{ "Unspecified" }, frequency{ 0.0 } {}
	~Processor();
private:
	std::string socket;
	float frequency;
};

