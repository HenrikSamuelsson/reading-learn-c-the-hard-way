#ifndef EX22_H
#define EX22_H

// Make THE_SIZE in ex22.c available to other .c files.
extern int THE_SIZE;

// Gets the internal static variable age in ex22.c.
int get_age();

// Sets the internal static variable age in ex22.c.
void set_age(int age);

// Updates a static variable that is inside update_ratio.
double update_ratio(double ratio);

void print_size();

#endif

