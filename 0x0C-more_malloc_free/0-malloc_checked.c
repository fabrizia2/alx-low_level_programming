#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <limits.h>

/**
 * malloc_checked - allocates memory using malloc
 * @b: memory to be allocated
 *
 * Return: 98 if fails else pointer to allocated mem
 */

void *malloc_checked(unsigned int b)
{

	void *str;

	str = malloc(b);

	if (str == NULL) /*if malloc fails*/
		exit(98);

	return (str);
}
/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	char *c;
	int *i;
	float *f;
	double *d;

	c = malloc_checked(sizeof(char) * 1024);
	printf("%p\n", (void *)c);
	i = malloc_checked(sizeof(int) * 402);
	printf("%p\n", (void *)i);
	f = malloc_checked(sizeof(float) * 100000000);
	printf("%p\n", (void *)f);
	d = malloc_checked(INT_MAX);
	printf("%p\n", (void *)d);
	free(c);
	free(i);
	free(f);
	free(d);
	return (0);
}
