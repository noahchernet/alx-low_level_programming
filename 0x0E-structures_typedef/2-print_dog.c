#include "stdio.h"
#include "dog.h"

/**
 * print_dog - prints the contents of type struct dog @d
 * @d: variable of type struct dog
 */
void print_dog(struct dog *d)
{
	printf("Name: ");
	if (d->name != 0)
		printf("%s\n", d->name);
	else
		printf("(nil)");

	printf("Age: ");
	if (d->age != 0)
		printf("%f\n", d->age);
	else
		printf("(nil)");


	printf("Owner: ");
	if (d->owner != 0)
		printf("%s\n", d->owner);
	else
		printf("(nil)");
}
