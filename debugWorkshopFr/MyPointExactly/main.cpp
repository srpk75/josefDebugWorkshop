#include "Point.h"
#include <iostream>

/*
Debug docs:
purpose - do some goofy stuff with points and print the points
issues - doesnt print the points at all
fixes:
- add p1 and p2 to print [ISSUE: garbage values when printing point 2]
- memcpy not copying data correctly, replaced memcpy with manual assignment, for more variables amounts use a for	loop
* changed [Point p2 = p1;]
- 

*/

int main()
{
	Point p1(1, 2);
	Point p2 = p1;

	std::cout << "p1=" << p1 << std::endl;
	std::cout << "p2=" << p2 << std::endl;

	return 0;
}
