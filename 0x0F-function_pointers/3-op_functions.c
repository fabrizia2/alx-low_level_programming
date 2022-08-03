#include "3-calc.h"

/**
 * op_add - returns sum of a and b
 * @a: first number
 * @b: second number
 *
 * Return: sum
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - returns the difference
 * @a: first number
 * @b: second number
 *
 * Return: difference
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - returns the product
 * @a: 1st num
 * @b: 2nd num
 *
 * Return: product
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - returns result of division
 * @a: numerator
 * @b: denomenetor
 *
 * Return: division result
 */

int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - returns the remainder of devision
 * @a: numerator
 * @b: denomenator
 *
 * Return: remainder
 */

int op_mod(int a, int b)
{
	return (a % b);
}
