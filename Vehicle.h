#pragma once

class Vehicle
{
public:

	Vehicle();

	~Vehicle();

	virtual void VehicleType();

protected:
	const char* name;
};