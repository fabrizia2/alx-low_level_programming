#include "main.h"

/**
 * flip_bits -  returns the number of bits you would need to flip
 * to get from one number to another.
 * @n: number of bits
 * @m: another bit
 *
 * Author: Fabrizia
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int flipbits = 0;

	for (;n || m; n >>= 1, m >>= 1)
	{
		if ((n & 1) != (m & 1))
			flipbits++;
	}

	return (flipbits);
}
