#include "main.h"

/**
 * get_endianness - checks the endianness.
 *
 * Return: 0 if big endian, 1 if little endian
 * coder: Renish
 */

int get_endianness(void)
{
	unsigned int x = 1;
	char *c = (char*) &x;

	return (int)*c;
}
