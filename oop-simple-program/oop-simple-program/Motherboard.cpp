#include "Motherboard.h"
#include <iostream>
#include <string>

void Motherboard::setChipsetModel(std::string chipsetModel) {
	this->chipsetModel = chipsetModel;
}

std::string Motherboard::getChipsetModel() {
	return chipsetModel;
}

void Motherboard::setFormat(std::string format) {
	this->format = format;
}

std::string Motherboard::getFormat() {
	return format;
}

void Motherboard::setGamingRecommended(bool gamingRecommended) {
	this->gamingRecommended;
}

bool Motherboard::getGamingRecommended() {
	return gamingRecommended;
}

void Motherboard::setPrice(float price) {
	this->price = price;
}

float Motherboard::getPrice() {
	return price;
}

void Motherboard::displayPrice(float price) {
	std::cout << "The price of this product is " << price;
}