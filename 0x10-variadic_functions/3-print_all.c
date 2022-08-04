#include "variadic_functions.h"

/**
 * print_all - prints anything
 * @format: a list o types of arguments passed to func
 *
 * Return;
 */

void print_all(const char * const format, ...)
{
	va_list any;
	unsigned int k = 0, beg = 0;
	char *str;

	va_start(any, format);
	while (format && format[k] != '\0')
	{
		switch (format[k])
		{ case 'c':
			switch (beg)
			{ case 1: printf(", "); }
			beg = 1;
			printf("%c", va_arg(any, int));
			break;
			case 'i':
			switch (beg)
			{ case 1: printf(", "); }
			beg = 1;
			printf("%i", va_arg(any, int));
			break;
		case 'f':
			switch (beg)
			{ case 1: printf(", "); }
			beg = 1;
			printf("%f", va_arg(any, double));
			break;
		case's':
			switch (beg)
			{ case 1: printf(", "); }
			beg = 1;
			str = va_arg(any, char*);
			if (str)
			{ printf("%s", str);
				break; }
			printf("%p", str);
			break; }
		k++;
	}
	printf("\n");
	va_end(any);
}
