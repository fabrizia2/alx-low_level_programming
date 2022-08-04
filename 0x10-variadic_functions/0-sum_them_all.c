#include "variadic_functions.h"

/**
 * sum_them_all - returns the sum of all its parameters
 * @n: number of parameters
 *
 * Return: sum
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list param;
	unsigned int k = 0;
	int addition = 0;

	if (n == 0)
	{
		return (0);
	}

	va_start(param, n);

	while (k < n)
	{
		addition += va_arg(param, int);
		k++;
	}

	va_end(param);

	return (addition);
}
