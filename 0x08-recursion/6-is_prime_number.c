#include "main.h"

/**
 * _prime_ - returns the 1 if n is prime
 * @n: number to be checked
 * @first: number to start checking from
 *
 * Return: 1 if n is prime, 0 otherwise
 */
int _prime_(int n, int first)
{
	if (first <= 1)
		return (1);
	else if (n % first == 0)
		return (0);
	return (_prime_(n, first - 1));
}

/**
 * is_prime_number - returns the 1 if n is prime
 * @n: number to be checked
 *
 * Return: 1 if n is prime, 0 otherwise
 */
int is_prime_number(int n)
{
	int first = n / 2;


	if (n <= 1)
		return (0);
	return (_prime_(n, first));
}
