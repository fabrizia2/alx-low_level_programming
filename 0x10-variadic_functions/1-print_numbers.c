#include "variadic_functions.h"

/**
 * print_numbers - prints numbers
 * @separator: string to be printed between numbers
 * @n: num of int passed to the func
 *
 * Return;
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list num;
	unsigned int k = 0;

	va_start(num, n);

	if (n > 0)
	{
		while (k < n - 1)
		{
			if (separator != NULL)
				printf("%d%s", va_arg(num, int), separator);
			else
				printf("%d", va_arg(num, int));
			k++;
		}

		printf("%d", va_arg(num, int));
	}

	printf("\n");
	va_end(num);
}
