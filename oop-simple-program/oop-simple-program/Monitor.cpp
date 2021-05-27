#include "Monitor.h"
#include <iostream>
#include <string>

void Monitor::setDiagonal(float diagonal) {
	this->diagonal = diagonal;
}

float Monitor::getDiagonal() {
	return diagonal;
}

void Monitor::setMaximalRefreshDate(int maximalRefreshDate) {
	this->maximalRefreshDate = maximalRefreshDate;
}

int Monitor::getMaximalRefreshDate() {
	return maximalRefreshDate;
}