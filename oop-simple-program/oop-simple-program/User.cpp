#include "User.h"
#include <iostream>
#include <string>

void User::setUsername(std::string username) {
	this->username = username;
}

std::string User::getUsername() {
	return username;
}

void User::setPassword(std::string password) {
	this->password = password;
}

std::string User::getPassword(std::string password) {
	return password;
}

void User::setAge(int age) {
	this->age = age;
}

int User::getAge() {
	return age;
}