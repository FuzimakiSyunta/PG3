#pragma once
#include "Vehicle.h"

class Track : public Vehicle
{
public:
	Track();
	~Track();

	void VehicleType() override;
};