#include "main.h"

/**
 * find_sqrt - Helper function to find the square root recursively
 * @n: The number to find the square root of
 * @guess: The current guess for the square root
 *
 * Return: The square root if found, or -1 if not found
 */

int find_sqrt(int n, int guess)
{
	int square = guess * guess;

	if (square == n)
		return (guess);
	if (square > n)
		return (-1);
	return (find_sqrt(n, guess + 1));
}

/**
 * _sqrt_recursion - Calculates the natural square root of a number
 * @n: The number for which to find the square root
 *
 * Return: The natural square root of n, or -1 if not found
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (find_sqrt(n, 0));
}
