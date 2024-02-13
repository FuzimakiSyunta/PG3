#include <stdio.h>
#include "Car.h"
#include "Track.h"

int main() {

	Vehicle* transducers[] = {
		new Vehicle(),
		new Car(),
		new Track()
	};

	transducers[0]->VehicleType();
	transducers[1]->VehicleType();
	transducers[2]->VehicleType();

	return 0;
}