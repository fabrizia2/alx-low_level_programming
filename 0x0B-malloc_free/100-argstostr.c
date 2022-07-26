#include "main.h"
#include <string.h>
#include <stdlib.h>

/**
 * argstostr - concatenates all the arguments of program
 * @ac: argument counts
 * @av: pointer to argument
 *
 * Return: NULL if ac == 0 || av == NULL else pointer to str
 */

char *argstostr(int ac, char **av)
{
	int f, m, r;
	int value = 0;
	char *arg;

	arg = (char *)malloc(value * sizeof(char));

	if (ac == 0 || av == NULL || arg == NULL)
	{
		return (NULL);
	}

	for (f = 0; ac > f; f++)
	{
		for (m = 0; av[f][m] != '\0'; m++)
			value++;
		value++;
	}
	value++;

	arg = (char *)malloc(value * sizeof(char));
	r = 0;
	for (f = 0; ac > f; f++)
	{
		for (m = 0; av[f][m] != '\0'; m++)
		{
			arg[r++] = av[f][m];
		}
		arg[r++] = '\n';
	}
	arg[r] = '\0';

	return (arg);
}
