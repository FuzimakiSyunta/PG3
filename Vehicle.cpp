#include "Vehicle.h"
#include <stdio.h>

Vehicle::Vehicle()
{
	name = "乗り物";
}

Vehicle::~Vehicle() {}

void Vehicle::VehicleType()
{
	printf("%s\n", name);
}