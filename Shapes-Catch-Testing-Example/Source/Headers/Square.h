#pragma once
class Square {

public:
	Square(float SideLength);

	// public methods to test
	float GetArea();

	float GetPerimiter();

private:
	float SideLength;
};