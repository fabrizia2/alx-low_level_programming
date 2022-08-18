#include "main.h"

/**
 * set_bit - sets the value of a bit to 1 at a given index.
 * @n: pointer to bit
 * @index: is the index, starting from 0 of the bit you want to set
 *
 * Return: 1 if it worked, or -1 if an error occurred
 * Author: Renish
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	/* failure case */
	if (index >= (sizeof(*n) * 8))
	{
		return (-1);
	}

	/* success case setting to 1*/
	*n ^= (1 << index);

	return (1);
}
