#include <stdio.h>

#define MAX_DATA 100

typedef enum EyeColor {
	BLUE_EYES,
	GREEN_EYES,
	BROWN_EYES,
	BLACK_EYES,
	ONTHER_EYES
} EyeColor;

const char *EYE_COLOR_NAMES[] = {"Blue", "Green", "Brown", "Black", "Other"};

typedef struct Person {
	int age;
	char first_name[MAX_DATA];
	char last_name[MAX_DATA];
	EyeColor eyes;
	float income;
} Person;

int main(int argc, char *argv[])
{
	Person you = {.age = 0};
	int i = 0;
	char *in = NULL;

	printf("What's your First Name? ");
	in = fgets(you.first_name, MAX_DATA - 1, stdin);
	if (in == NULL)
	{
		printf("Failed to read first name!");
		goto error;
	}
	
	printf("What's your Last Name? ");
	in = fgets(you.last_name, MAX_DATA - 1, stdin);
	if (in == NULL)
	{
		printf("Failed to read last name!");
		goto error;
	}

	printf("---- RESULTS -----\n");
	
	printf("First Name: %s", you.first_name);
	printf("Last Name: %s", you.last_name);
        
	return 0;

error:
	return -1;
}	

