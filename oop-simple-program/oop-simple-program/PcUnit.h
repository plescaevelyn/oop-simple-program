#pragma once
#include "PcUnitInterface.h"
#include <iostream>
#include <string> 

class PcUnit :
	public PcUnitInterface
{
public:
	void setPcUnitName(std::string pcUnitName);
	std::string getPcUnitName();

	void setProducerCode(int producerCode);
	int getProducerCode();
	void setWarranty(int warranty);
	int getWarranty();
	void setPrice(float price);
	float getPrice();
	void displayPrice(float price);

	PcUnit() : pcUnitName{ "Unspecified" }, producerCode{ 0 }, warranty{ 0 } {}
	~PcUnit() {}
private:
	std::string pcUnitName;
	int producerCode;
	int warranty;
};

