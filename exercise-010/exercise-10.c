#include <stdio.h>

int main(int argc, char *argv[])
{
	int i = 0;

	// Go through each string in argv
	// expect the first that is not relevant
	// since it just holds the name of the
	// program.
	for (i = 1; i < argc; i++)
	{
		printf("arg %d: %s\n", i, argv[i]);
	}

	// Create an array of strings.
	char *states[] = 
	{
		"California",
		"Oregon",
		"Washington",
		"Texas"
	};

	int num_states = 4;

	for (i = 0; i < num_states; i++)
	{
		printf("state %d: %s\n", i, states[i]);
	}
}

