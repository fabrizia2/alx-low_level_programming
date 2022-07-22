#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints number of arguments passed to it
 * @argc: interger
 * @argv: pointer to integer
 * Return: 0
 */

int main(int argc, char **argv)
{
	int r;


	for (r = 0; argc > 0; r++, argc--)
	{
		printf("%s\n", argv[r]);
	}

	return (0);
}
