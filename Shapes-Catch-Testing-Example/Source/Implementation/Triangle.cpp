#include "../Headers/Triangle.h"
#include <math.h>
#include <stdexcept>
#include <iostream>

Triangle::Triangle(float SideLengthA, float SideLengthB, float SideLengthC) {
	this->SideLengthA = SideLengthA;
	this->SideLengthB = SideLengthB;
	this->SideLengthC = SideLengthC;

	if (!IsValidTriangle())
	{
		throw std::invalid_argument("This Triangle Is Fake News!");
	}
}

float Triangle::GetArea() {
	float HalfOfPerimiter = (SideLengthA + SideLengthB + SideLengthC) / 2.0;
	float AreaSquared = HalfOfPerimiter * fabs(HalfOfPerimiter - SideLengthA) * fabs(HalfOfPerimiter - SideLengthB) * fabs(HalfOfPerimiter - SideLengthC);

	return sqrt(AreaSquared);
}

float Triangle::GetPerimiter() {
	return SideLengthA + SideLengthB + SideLengthC;
}

bool Triangle::IsValidTriangle() {
	bool TriangleInnequalityIsValid =
		SideLengthA <= (SideLengthB + SideLengthC) &&
		SideLengthB <= (SideLengthA + SideLengthC) &&
		SideLengthC <= (SideLengthA + SideLengthB);

	bool TriangleSidesArePositive =
		SideLengthA > 0 &&
		SideLengthB > 0 &&
		SideLengthC > 0;

	return TriangleInnequalityIsValid && TriangleSidesArePositive;
}