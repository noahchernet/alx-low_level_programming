#include "stdio.h"
#include "dog.h"

/**
 * print_dog - prints the contents of type struct dog @d
 * @d: variable of type struct dog
 */
void print_dog(struct dog *d)
{
	if (d == 0)
		return;

	if (d->name == NULL && d->owner == NULL)
		return;

	printf("Name: ");
	if (d->name != NULL)
		printf("%s\n", d->name);
	else
		printf("(nil)");

	printf("Age: ");
	if (d->age != 0)
		printf("%f\n", d->age);
	else
		printf("(nil)");

	printf("Owner: ");
	if (d->owner != NULL)
		printf("%s\n", d->owner);
	else
		printf("(nil)");
}
