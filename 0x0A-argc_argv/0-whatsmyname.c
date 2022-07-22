#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints name of program
 * @argc: number of arguments
 * @argv: pointer to arguments
 * Return: 0
 */

int main(int argc, char **argv)
{

	printf("%s\n", *argv);
	(void)argc;

	return (0);
}
