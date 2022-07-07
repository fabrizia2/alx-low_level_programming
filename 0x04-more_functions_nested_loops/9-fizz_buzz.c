#include "main.h"


/**
 * main - Entry point
 *
 * Description: prints FizzBuzz
 *
 * Return: void
 */
int main(void)
{
	int m;

	for (m = 1; m <= 100; m++)
	{
		if ((m % 3 == 0) && (m % 5 == 0))
			printf("FizzBuzz");
		else if (m % 5 == 0)
			printf("Buzz");
		else if (m % 3 == 0)
			printf("Fizz");
		else
			printf("%i", m);

		if (m < 100)
			printf(" ");
		else
			printf("\n");
	}
	return (0);

}
