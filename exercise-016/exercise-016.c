#include <stdio.h>
#include <assert.h>
#include <stdlib.h>
#include <string.h>

struct Person 
{
	char *name;
	int age;
	int height;
	int weight;
};

struct Person *person_create(char *name, int age, int height, int weight)
{
	struct Person *newPerson = malloc(sizeof(struct Person));
	assert(NULL != newPerson);

	newPerson->name = strdup(name);
	newPerson->age = age;
	newPerson->height = height;
	newPerson->weight = weight;

	return newPerson;
}

void person_destroy(struct Person *personToDestroy)
{
	assert(NULL != personToDestroy);

	free(personToDestroy->name);
	free(personToDestroy);
}

void person_print(struct Person *personToPrint)
{
	printf("Name: %s\n", personToPrint->name);
	printf("Age: %d\n", personToPrint->age);
	printf("Height: %d\n", personToPrint->height);
	printf("Weight: %d\n", personToPrint->weight);
}

int main(int argc, char *argv[])
{
	// Create two persons.
	struct Person *joe = person_create("Joe Alex",32, 64, 140);
	struct Person *frank = person_create("Frank Blank", 20, 72, 180);

	// Print the memory location of the person Joe.
	printf("%s is at memory location %p\n", joe->name, joe);

	// Print the memory location of the person Frank.
	printf("%s is at memory location %p\n", frank->name, frank);

	// Print data about Joe.
	person_print(joe);

	// Increase the age of Joe.
	joe->age += 20;

	// Print data about Joe again.
	person_print(joe);

	// Destroy the two previously created persons.
	person_destroy(joe);
	person_destroy(frank);

	return EXIT_SUCCESS;
}

