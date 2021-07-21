#include <stdlib.h>
#include <stdio.h>

#define AREAS_COUNT 5

int main(int argc, char *argv[])
{
	int areas[AREAS_COUNT] = {10, 12, 13, 14, 20};
	
	printf("The int array areas holds: "); 
	for (size_t i = 0; i < AREAS_COUNT; i++)
	{
		printf("%d ", areas[i]);
	}
	printf("\n");
 
	printf("Size of an int: %ld\n", sizeof(int));
	printf("Size of areas: %ld\n", sizeof(areas));
	printf("Areas element count: %ld\n", sizeof(areas) / sizeof(int));
	printf("\n");

	char short_name[] = "Henrik";
	
	printf("Short name (a char array): %s\n", short_name);
	printf("The size of a char: %ld\n", sizeof(char));
	printf("The size of short name: %ld\n", sizeof(short_name));
	printf("Short name element count: %ld\n", sizeof(short_name) / sizeof(char));
	printf("\n");

	char full_name[] = {
		'H', 'e', 'n', 'r', 'i', 'k', ' ', 
		'S', 'a', 'm', 'u', 'e', 'l', 's', 's', 'o', 'n', 
		'\0'
	};
	
	printf("Full name (a char array): %s\n", full_name);
	printf("The size of a char: %ld\n", sizeof(char));
	printf("The size of full name: %ld\n", sizeof(full_name));
	printf("Full name element count: %ld\n", sizeof(full_name) / sizeof(char));

	return EXIT_SUCCESS;
}

