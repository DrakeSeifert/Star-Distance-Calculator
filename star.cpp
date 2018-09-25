#include <iostream>
#include <stdlib.h>
#include "star.hpp"
#include <math.h>

int Star::getCoordinate() {
	//random value between -5000 and 4999
	return rand() % 10000 - 5000;
}

Star::Star() {
	this->x = getCoordinate();
	this->y = getCoordinate();
	this->z = getCoordinate();
}

int Star::distance() {
	return sqrt( x*x + y*y + z*z );
}