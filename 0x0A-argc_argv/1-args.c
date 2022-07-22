#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints number of arguments passed to it
 * @argc: interger
 * @argv: pointer to integer
 * Return: 0
 */

int main(int argc, char *argv[] __attribute__((unused)))
{

	printf("%d\n", --argc);

	return (0);
}
