#include "..\Headers\Square.h"
#include <stdexcept>

Square::Square(float SideLength)
{
	if (SideLength <= 0)
	{
		throw std::invalid_argument("This Square Is Fake News!");
	}

	this->SideLength = SideLength;
}

float Square::GetArea()
{
	return SideLength * SideLength;
}

float Square::GetPerimiter()
{
	return  SideLength * 4;
}
