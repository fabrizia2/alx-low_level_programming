#include "variadic_functions.h"

/**
 * print_strings - prints strings
 * @separator: string to be printed btwn the strings
 * @n: num of strings passed to the func
 *
 * Return;
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list string;
	char *str;
	unsigned int k = 0;

	va_start(string, n);

	while (k < n)
	{
		str = va_arg(string, char *);

		if (str == NULL)
		{
			str = "(nil)";
		}
		if (separator == NULL)
		{
			printf("%s", str);
		}
		else if (separator && k == 0)
		{
			printf("%s", str);
		}
		else
		{
			printf("%s%s", separator, str);
		}
		k++;
	}
	printf("\n");

	va_end(string);
}
