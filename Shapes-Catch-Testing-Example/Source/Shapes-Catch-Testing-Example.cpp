// Shapes-Catch-Testing-Example.cpp : Defines the entry point for the console application.
//

#include "Headers/Triangle.h"
#include <iostream>

int main()
{
	try
	{
		Triangle triangle = Triangle(10.0f, 15.0f, 20.0f);
		std::cout << "Triangle has area " << triangle.GetArea() << std::endl;
	}
	catch (const std::exception&)
	{
		std::cout << "Triangle not valid" << std::endl;
		return 1;
	}

    return 0;
}