#pragma once
#include "IShape.h"
class Rectangle : public IShape
{
public:
	Rectangle();

	~Rectangle();

	void Size();

	void Draw();

private:
	
	int height = 5;
	
	int width = 10;

	int answer = 0;
};