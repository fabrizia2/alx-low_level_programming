#include <stdio.h>
#include "dog.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */

;int main(void)
{
    struct dog my_dog;

    my_dog.name = "Poppy";
    my_dog.age = 8.5;
    my_dog.owner = "Renish";
    printf("My name is %s, and My owner is %s, nd I am %.1f :) - Woof!\n", my_dog.name, my_dog.owner, my_dog.age);
    return (0);
}
