#ifndef DOG_H
#define DOG_H

/**
 * struct dog - Define a new struct dog with name, age, owner
 * @name: name of the dog
 * @age: the dog`s age
 * @owner: the dog`s owner
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
typedef struct dog dog_t;
#endif
