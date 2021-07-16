#include <stdio.h>

int main(int argc, char *argv[])
{
	int i = 0;

	if (argc == 1)
	{
		printf("You have not provided any argument.\n");
	}
	else if (argc == 2)
	{
		printf("Here is your argument:\n");
		printf("%s\n", argv[1]);
	}
	else if (argc < 4)
	{
		printf("Here are your arguments:\n");
		for (i = 1; i < argc; i++)
		{
			printf("%s ", argv[i]);
		}
		printf("\n");
	}
	else
	{
		printf("You have provided more than two arguments.\n");
	}

	return 0;
}
