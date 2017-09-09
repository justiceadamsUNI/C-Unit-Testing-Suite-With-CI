#include "catch.hpp"
#include <math.h> 
#include "../Source/Headers/Triangle.h"


TEST_CASE("Triangle Constructor Throws Exception When One Side Is Negative", "[Triangle]") {
	REQUIRE_THROWS(Triangle(-10.0f, 10.0f, 10.0f));
}

TEST_CASE("Triangle Constructor Throws Exception When Not A Valid Triangle", "[Triangle]") {
	REQUIRE_THROWS(Triangle(10.0f, 10.0f, 25.0f));
}

TEST_CASE("Triangle Constructor Works When Valid Data Is Used", "[Triangle]") {
	REQUIRE_NOTHROW(Triangle(10.0f, 15.0f, 20.0f));
}

TEST_CASE("Triangle Area Is Computed Correctly", "[Triangle]") {
	Triangle Triangle(10.0f, 15.0f, 20.0f);
	float RoundedArea = roundf(Triangle.GetArea() * 100) / 100;

	REQUIRE(RoundedArea == 72.62f);
}

TEST_CASE("Triangle Perimiter Is Computed Correctly", "[Triangle]") {
	Triangle Triangle(10.0f, 15.0f, 20.0f);
	float Perimiter = Triangle.GetPerimiter();

	REQUIRE(Perimiter == 45.0f);
}