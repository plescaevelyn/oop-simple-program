#include "Processor.h"
#include <iostream>
#include <string>

void Processor::setSocket(std::string socket) {
	this->socket = socket;
}

std::string Processor::getSocket() {
	return socket;
}

void Processor::setFrequency(float frequency) {
	this->frequency = frequency;
}

float Processor::getFrequency() {
	return frequency;
}

void Processor::setPrice(float price) {
	this->price = price;
}

float Processor::getPrice() {
	return price;
}

void Processor::displayPrice(float price) {
	std::cout << "The price of this product is " << price;
}