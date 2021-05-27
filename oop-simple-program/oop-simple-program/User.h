#pragma once
#include "PcUnitInterface.h"
#include "PcUnit.h"
#include <iostream>
#include <string>

class User :
	public PcUnitInterface
{
public:
	void setUsername(std::string username);
	std::string getUsername();
	void setPassword(std::string password);
	std::string getPassword(std::string password);
	void setAge(int age);
	int getAge();

	void setPrice(float price) {}
	float getPrice() { return price; }
	void displayPrice(float price) {}

	friend class Monitor;

	User() : username{ "Unspecified" }, password{ "*" }, age{ 18 } {}
	~User() {}
private:
	PcUnit carcass;
	std::string username;
	std::string password;
	int age;
};

