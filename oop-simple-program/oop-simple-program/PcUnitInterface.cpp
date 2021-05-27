#include "PcUnitInterface.h"
#include <iostream>
#include <string>

void PcUnitInterface::setPrice(float price) {
	this->price = price;
}

float PcUnitInterface::getPrice() {
	return price;
}