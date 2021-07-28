#include <stdio.h>
#include "ex22.h"

int the_size = 1000;

static int the_age = 37;

int get_age()
{
	return the_age;
}

void set_age(int age)
{
	the_age = age;
}

double update_ratio(double new_ratio)
{
	static double ratio = 1.0;

	double old_ratio = ratio;
	ratio = new_ratio;

	return old_ratio;
}

void print_size()
{
	printf("I think size is : %d", the_size);
}

