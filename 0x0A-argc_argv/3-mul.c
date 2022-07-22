#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies two numbers
 * @argc: argument count
 * @argv: argument vector
 * Return: multiple
 */

int main(int argc, char **argv)
{
	int multiple = atoi(argv[1]) * atoi(argv[2]);

	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}
	else
		printf("%d\n", multiple);


	return (0);
}
