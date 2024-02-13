#include "Rectangle.h"
#include <stdio.h>

Rectangle::Rectangle()
{
	Size();
}

Rectangle::~Rectangle()
{
}

void Rectangle::Size()
{
	answer = height * width;
}

void Rectangle::Draw()
{
	printf("’·•ûŒ` = %d\n", answer);
}