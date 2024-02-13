#include "Car.h"
#include <stdio.h>

Car::Car()
{
	name = " 車“";
}

Car::~Car()
{
}

void Car::VehicleType()
{
	printf("%s\n", name);
}