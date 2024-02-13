#include "Track.h"
#include <stdio.h>

Track::Track()
{
	name = "トラック“";
}

Track::~Track()
{
}

void Track::VehicleType()
{
	printf("%s\n", name);
}