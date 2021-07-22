#include <stdlib.h>
#include <stdio.h>

int main(int argc, char *argv[])
{
	// Create two arrays with ages and correpsonding names.
	int ages[] = {23, 43, 12, 89, 2};
	char *names[] = {"Alan", "Frank", "Mary", "John", "Lisa"};

	// Get the number of elements in the array ages.
	int count = sizeof(ages) / sizeof(int);

	// Display content of ages and names using indexes.
	for (size_t idx = 0; idx < count; idx++)
	{
		printf("%s is %d years old.", names[idx], ages[idx]);
		printf("\n");
	}
	printf("\n");
	
	return EXIT_SUCCESS;
}

