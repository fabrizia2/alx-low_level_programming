#include "main.h"

/**
 * binary_to_uint -  converts a binary number to an unsigned int.
 * @b: a pointer to a string of 0 and 1 chars
 *
 * Return: the converted number
 *
 * Author: Mel B
 */

unsigned int binary_to_uint(const char *b)
{
	int zero = 0;
	unsigned int conv_num = 0;

	if (b == NULL)
	{
		return (0);
	}

	while (b[zero])
	{
		if (b[zero] < '0' || b[zero] > '1')
		{
			return (0);
		}
		conv_num = 2 * conv_num + (b[zero] - '0');
		zero++;
	}

	return (conv_num);
}
