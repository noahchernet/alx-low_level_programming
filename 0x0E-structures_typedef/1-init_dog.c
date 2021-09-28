#include "dog.h"
#include "stdlib.h"

/**
 * init_dog - initializes a variable of type struct dog
 * @d: the struct dog to be initialized
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
	{
		return;
	}
	d = malloc(sizeof(struct dog));
	d->age = 0;
	d->owner = 0;

	d->name = name;
	d->owner = owner;
}
