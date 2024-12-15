#include "shape.h"
#include "triangle.h"
#include <iostream>
/*
Debug docs
purpose: code creates 2 triangles, one using a pointer and tries to calculate their areas.

- the code prints that the area of the pointer triangle is 0 instead of 10
	[issue] issue seems related to the 'hasDepth' boolean in the function signature
	[fix] remove it? maybe im missing something but thats the most straight forward way that doesnt
		  hurt the current features of the program
	alr it works now
*/

int main() 
{
	Triangle triangle(2, 10);
	std::cout << "The area of the triangle is " << triangle.get_area() << std::endl;

	Shape* pTriangle = new Triangle(2, 10);
	std::cout << "The area of the triangle is " << pTriangle->get_area() << std::endl;
	delete pTriangle;

	return 0;
}
