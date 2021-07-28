#include "ex22.h"
#include <stdio.h>

const char *MY_NAME = "Henrik Samuelsson";

void scope_demo(int count)
{
	printf("outside count = %d\n", count);
	if (count > 10)
	{
		int count = 100;   // New count hides the outer scope count.
		printf("inside count = %d\n", count);
	}
	printf("outside count again = %d\n", count);
	count = 3000;
	printf("outsid count after assign = %d\n", count);
}

int main(int argc, char *argv[])
{
	// Test the age getter function.
	printf("My name is: %s, age: %d\n", MY_NAME, get_age());
	// Change the age using the public setter function.
	set_age(100);
	printf("My age is now: %d\n", get_age());

	// Test out the the_size extern.
	printf("the_size = %d\n", the_size);
	the_size = 9;
	printf("the_size is now = %d\n", the_size);

	// Test the ratio function static.
	printf("Ratio at first = %f\n", update_ratio(2.0));
	printf("Ratio again = %f\n", update_ratio(10.0));
	printf("Ratio once more = %f\n", update_ratio(300.0));

	// Test the scope demo.
	int count = 4;
	scope_demo(count);
	scope_demo(count * 4);

	return 0;
}

