#pragma once
#include "pcUnit.h"
#include <iostream>
#include <string>

class Motherboard :
    public PcUnit
{
public:
	void setChipsetModel(std::string chipsetModel);
	std::string getChipsetModel();
	void setFormat(std::string format);
	std::string getFormat();
	void setGamingRecommended(bool gamingRecommended);
	bool getGamingRecommended();	
	void setPrice(float price);
	float getPrice();
	void displayPrice(float price);

	Motherboard() : chipsetModel("Unspecified"), format{ "Unspecified" }, gamingRecommended{ false } {}
	~Motherboard();
private:
	std::string chipsetModel;
	std::string format;
	bool gamingRecommended;
};

