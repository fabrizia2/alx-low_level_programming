#include <stdio.h>
#include <stdlib.h>

/**
 * print_opcodes - function that print the opcodes of this program
 * @a: address of the main function
 * @n: number of bytes to print
 *
 * Return: void
**/
void print_opcodes(char *a, int n)
{
	int f = 0;

	while (f < n)
	{
		printf("%.2hhx", a[f]);
		if (f < n - 1)
		printf(" ");
		f++;
	}
	printf("\n");
}

/**
 * main - function that prints the opcodes of its own main function
 * @argc: number of arguments passed to the function
 * @argv: array of pointers to arguments
 *
 * Return: always O
 */
int main(int argc, char **argv)
{
	int k;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	k = atoi(argv[1]);
	if (k < 0)
	{
		printf("Error\n");
		exit(2);
	}

	print_opcodes((char *)&main, k);
	return (0);
}
