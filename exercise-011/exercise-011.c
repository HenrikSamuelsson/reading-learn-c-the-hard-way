#include <stdio.h>

int main(int argc, char *argv[])
{
	int nums[4] = {0};

	// Print out each number by accessing each element in the array.
	printf("nums each: ");
	printf("%d%d%d%d", nums[0], nums[1], nums[2], nums[3]);
	printf("\n");

	char name[4] = {'a'};
	
	// Print out each char by accessing each element in the array.
	printf("name each: ");
	printf("%c%c%c%c", name[0], name[1], name[2], name[3]);
	printf("\n");
	
	// Print out of name by threathing the name array as a string.
	printf("name as string: %s", name);
	printf("\n");

	// Change the content of the numbers array.
	nums[0] = 1;
	nums[1] = 2;
	nums[2] = 3;
	nums[3] = 4;

	// Again print out each number by accessing each element in the array.
	printf("again nums each: ");
	printf("%d%d%d%d", nums[0], nums[1], nums[2], nums[3]);
	printf("\n");

	// Change the content of the name array.
	name[0] = 'Z';
	name[1] = 'e';
	name[2] = 'd';
	name[3] = '\0';

	// Again print out each char by accessing each element in the array.
	printf("again name each: ");
	printf("%c%c%c%c", name[0], name[1], name[2], name[3]);
	printf("\n");
	
	// Again print out of name by threathing the name array as a string.
	printf("again name as string: %s", name);
	printf("\n");

	// Another way to declare a string.
	char *another = "Zed";

	// Print out the string called another.
	printf("another: %s", another);
	printf("\n");
	
	return 0;
}

