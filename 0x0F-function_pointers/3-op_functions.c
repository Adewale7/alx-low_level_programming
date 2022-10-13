#include <stdio.h>
#include "3-calc.h"

/**
 * op_add - Returns the sum of two integers.
 * @a: The first integer.
 * @b: The second integer.
 *
 * Return: The sum of a and b.
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - Returns the difference of two integers.
 * @a: The first integer.
 * @b: The second integer.
 *
 * Return: The difference of a and b.
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - Returns the product of two integers.
 * @a: The first integer.
 * @b: The second integer.
 *
 * Return: The product of a and b.
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - Returns the division of two integers.
 * @a: The first integer.
 * @b: The second integer.
 *
 * Return: The quotient of a and b.
 */

int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - Returns the remainder of the division of two integers.
 * @a: The first integer.
 * @b: The second integer.
 *
 * Return: The remainder of the division of a by b.
 */

int op_mod(int a, int b)
{
	return (a % b);
}
