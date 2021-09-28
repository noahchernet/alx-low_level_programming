#include "dog.h"

/**
 * init_dog - initializes a variable of type struct dog
 * @d: the struct dog to be initialized
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	if (age < 0)
		d->age = -1 * age;
	else
		d->age = age;
	d->owner = owner;
}
