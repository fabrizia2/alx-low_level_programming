#include "dog.h"

/**
 * init_dog - initializes a variable of type struct dog
 * @d: pointer to type struct dog
 * @name: pointer to name
 * @age: pointer to age of struct
 * @owner: pointer to owner og struct
 *
 * Return ;
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
