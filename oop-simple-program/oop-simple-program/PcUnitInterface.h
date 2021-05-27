#pragma once
#include <iostream>
#include <string>

class PcUnitInterface {
public:
	virtual void displayPrice(float price) = 0;
	virtual void setPrice(float price) = 0;
	virtual float getPrice() = 0;

protected:
	float price = 0;
};