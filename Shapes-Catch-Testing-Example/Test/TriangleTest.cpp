#include "catch.hpp"
#include "../Source/Headers/Triangle.h"


TEST_CASE("testing some stuff") {
	Triangle tri = Triangle(10.0f, 15.0f, 20.0f);

	REQUIRE(1 == 1);
}