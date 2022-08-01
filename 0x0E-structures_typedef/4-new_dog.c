#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * new_dog - prints a new dog
 * @name: name of the dog
 * @age: the dog`s age
 * @owner: the dog`s owner
 *
 * Return: NULL on failure, else new dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	int namepop = 0, ownerpop = 0, agepop;
	dog_t *tail;

	while (name[namepop] != '\0')
		namepop++;
	while (owner[ownerpop] != '\0')
		ownerpop++;

	tail = malloc(sizeof(dog_t));
	if (tail == NULL)
	{
		free(tail);
		return (NULL);
	}
	tail->name = malloc(sizeof(tail->name) * namepop);
	if (tail->name == NULL)
	{
		free(tail->name);
		free(tail);
		return (NULL);
	}
	for (agepop = 0; agepop <= namepop; agepop++)
		tail->name[agepop] = name[agepop];
	tail->age = age;
	tail->owner = malloc(sizeof(tail->owner) * ownerpop);
	if (tail->owner == NULL)
	{
		free(tail->owner);
		free(tail->name);
		free(tail);
		return (NULL);
	}
	for (agepop = 0; agepop <= ownerpop; agepop++)
		tail->owner[agepop] = owner[agepop];
	return (tail);
}
