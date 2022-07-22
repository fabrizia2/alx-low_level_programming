#include <stdio.h>
#include <stdlib.h>

/**
 * main - adds positive numbers
 * @argc: argument count
 * @argv: argument vector
 *
 * Description: If one of the number contains symbols that are
 * not digits, print Error, followed by a new line, and return 1
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int m, r;
	int summation = 0;

	for (m = 1; argc > 1; argc--, m += 1)
	{
	for (r = 0; (argv[m])[r] != '\0'; r += 1)
	{
	if (((argv[m])[r] - '0') >= 0 && ((argv[m])[r] - '0') <= 9)
	continue;
	else
	{
		printf("Error\n");
		return (1);
	}
	}
	summation += atoi(argv[m]);
	}
		printf("%d\n", summation);
		return (0);
}
