#include "PcUnit.h"
#include <iostream>
#include <string>

void PcUnit::setPcUnitName(std::string pcUnitName) {
	this->pcUnitName = pcUnitName;
}

std::string PcUnit::getPcUnitName() {
	return pcUnitName;
}

void PcUnit::setProducerCode(int producerCode) {
	this->producerCode = producerCode;
}
int PcUnit::getProducerCode() {
	return producerCode;
}

void PcUnit::setWarranty(int warranty) {
	this->warranty = warranty;
}
int PcUnit::getWarranty() {
	return warranty;
}

void PcUnit::setPrice(float price) {
	this->price = price;
}

float PcUnit::getPrice() {
	return price;
}

void PcUnit::displayPrice (float price) {
	std::cout << "The price of this product is " << price;
}