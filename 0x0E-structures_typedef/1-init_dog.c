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

	struct dog new_dog;

	new_dog.name = name;
	new_dog.age = age;
	new_dog.owner = owner;

	if (d == 0)
		return;

	*d = new_dog;

}
