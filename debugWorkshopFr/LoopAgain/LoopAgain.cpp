/*
Debug docs:
purpose: code asks user for a size, and prints the fibonachi sequence i think?
		 i think thats what its doing
execution: loop is infinite and its printing a bunch of numbers

- because size is unsigned it overflows to the highest positive value allowed
	[fix] change size to a signed int and yes it was fibonachi sequence im the goat

*/


#include <iostream>

int main()
{
	int size = 0;

	int t1 = 0, t2 = 1;

	std::cout << "what is the size of the series? ";
	std::cin >> size;

	while (size >= 0)
	{
		std::cout << t1 << ", ";

		int nextTerm = t1 + t2;
		t1 = t2;
		t2 = nextTerm;

		size--;
	}

	return 0;
}