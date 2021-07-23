#include <stdlib.h>
#include <stdio.h>

int main(int argc, char *argv[])
{
	// Define an array holding numbers indicating ages.
	int ages[] = {23, 43, 12, 89, 2};

	// Define an array holding string indicating names. where 
	// Each name orrespondes to the ages array, i.e Alan is 23 years old.
	char *names[] = {"Alan", "Frank", "Mary", "John", "Lisa"};

	// Setup a pointer to the start of the ages array.
	int *ages_p = ages;
	
	// Setup a pointer to pointer to char to the start of the names array.
	char **names_pp = names; 

	// Calculate the number of elements in the array ages.
	int count = sizeof(ages) / sizeof(int);

	printf("Ages and names printed using array indexes.");
	printf("\n");
	for (size_t idx = 0; idx < count; idx++)
	{
		printf("%s is %d years old.", names[idx], ages[idx]);
		printf("\n");
	}
	printf("\n");
	
	printf("Ages and names printed using pointers.");
	printf("\n");
	for (size_t i = 0; i < count; i++)
	{
		printf("%s is %d years old.", *(names_pp + i), *(ages_p + i));
		printf("\n");
	}
	printf("\n");

	printf("Ages and names printed using pointers as arrays.");
	printf("\n");
	for (size_t idx = 0; idx < count; idx++)
	{
		printf("%s is %d years old.", names_pp[idx], ages_p[idx]);
		printf("\n");
	}
	printf("\n");
	
	printf("Ages and names printed using complex pointer arithmetics.");
	printf("\n");
	for (ages_p = ages, names_pp = names; ages_p - ages < count; ages_p++, names_pp++)
	{
		printf("%s is %d years old.", *names_pp, *ages_p);
		printf("\n");
	}
	printf("\n");

	return EXIT_SUCCESS;
}

