#include "catch.hpp"
#include <math.h> 
#include "../Source/Headers/Triangle.h"


TEST_CASE("Triangle area is computed correctly", "[Triangle]") {
	Triangle Triangle(10.0f, 15.0f, 20.0f);

	float RoundedArea = roundf(Triangle.GetArea() * 100) / 100;

	REQUIRE(RoundedArea == 72.62f);
}