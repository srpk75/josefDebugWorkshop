#include "part1.h"
#include "part2.h"

/*
Debug docs
purpose: copy a string, why complicate it so much
execution: code crashes

- first the array isnt big enough, gotta leave a space for good ol '\0'
	[fix] make it 13
	[nice] it worked

* part 2 - code prints hello world and a bunch of garbage values, probably exceeded array limits

- issue is dest array was not initialised
	[fix] initialise it..
*/

int main()
{
	part1();

	part2();	// debug this after the completion of part1

	return 0;
}
