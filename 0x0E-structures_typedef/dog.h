#ifndef DOG_H
#define DOG_H

/**
 * struct dog - defines a dog with it's name, age and owner
 * @name: name of the dog
 * @age: how old the dog is
 * @owner: the owner of the dog
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
typedef struct init_dog dog_t;

#endif /* DOG_H */