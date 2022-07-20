#include "main.h"

/**
 * _square_root - returns the square root of a number
 * @n: test number
 * @x: squared number
 *
 * Return: the square root of n
 */
int _square_root(int n, int x)
{
	if (n > x / 2)
		return (-1);
	else if (n * n == x)
		return (n);
	return (_square_root(n + 1, x));
}

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: number to be used
 *
 * Return: the square root of n
 */
int _sqrt_recursion(int n)
{
	if (n == 1 || n == 0)
		return (n);
	return (_square_root(0, n));
}
