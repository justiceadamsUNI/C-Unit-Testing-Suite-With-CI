#pragma once
class Triangle {

public:
	Triangle(float SideLengthA, float SideLengthB, float SideLengthC);

	// public methods to test
	float GetArea();

	float GetPerimiter();

private:
	float SideLengthA;
	float SideLengthB;
	float SideLengthC;

	// private methods to test via the constructor.
	bool IsValidTriangle();
};
