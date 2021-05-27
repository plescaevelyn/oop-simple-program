#include "CpuChip.h"
#include <iostream>
#include <string>

void CpuChip::setChipsetName(std::string chipsetName) {
	this->chipsetName = chipsetName;
}

std::string CpuChip::getChipsetName() {
	return chipsetName;
}

void CpuChip::setBrand(std::string brand) {
	this->brand = brand;
}

std::string CpuChip::getBrand() {
	return brand;
}

void CpuChip::setPrice(float price) {
	this->price = price;
}

float CpuChip::getPrice() {
	return price;
}

void CpuChip::displayPrice(float price) {
	std::cout << "The price of this product is " << price;
}