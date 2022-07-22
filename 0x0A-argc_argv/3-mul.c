#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies two numbers
 * @argc: argument count
 * @argv: argument vector
 * Return: result
 */

int main(int argc, char **argv)
{
	int multiple = atoi(argv[1]) * atoi(argv[2]);

	if (argc == 3)
	{
		printf("%d\n", multiple);
	}
	else
	{
		printf("Error\n");
		return (1);
	}

	return (0);
}
