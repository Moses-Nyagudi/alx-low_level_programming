#include "3-calc.h"

/**
 * op_add - Returns the sum of a and b.
 * @a: The first integer
 * @b: The second integer
 * Return: The result of the addition
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - Returns the difference of a and b.
 * @a: The first integer
 * @b: The second integer
 * Return: The result of subtraction
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - Returns the product of a and b.
 * @a: The first integer
 * @b: The second integer
 * Return: The result of multiplication
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - Returns the result of the division of a by b.
 * @a: The dividend
 * @b: The divisor
 * Return: The result of division
 */

int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - Returns the remainder of the division of a by b.
 * @a: The dividend
 * @b: The divisor
 * Return: The result of the modulo operation
 */

int op_mod(int a, int b)
{
	return (a % b);
}
