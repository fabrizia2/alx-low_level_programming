#include "main.h"

/**
 * get_bit - returns the value of a bit at a given index
 * @index: the index starting from 0 of the wanted bit
 * @n: the number
 *
 * Author: Renish Okago
 *
 * Return: the value of the bit at index index or -1 if fails
 */

int get_bit(unsigned long int n, unsigned int index)
{
	/* failure case */
	if (index >= (sizeof(n) * 8))
	{
		return (-1);
	}

	/* else if successful */
	if ((n & (1 << index)) == 0)
	{
		return (0);
	}

	return (1);
}
