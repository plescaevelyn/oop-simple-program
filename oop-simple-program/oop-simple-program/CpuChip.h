#pragma once
#include "Motherboard.h"
#include <iostream>
#include <string> 

class CpuChip :
    public Motherboard
{
public:
	void setChipsetName(std::string chipsetName);
	std::string getChipsetName();
	void setBrand(std::string brand);
	std::string getBrand();
	void setPrice(float price);
	float getPrice();
	void displayPrice(float price);

	CpuChip() : chipsetName{ "Unspecified" }, brand{ "Unspecified" } {}
	~CpuChip();
private:
	std::string chipsetName;
	std::string brand;
};

