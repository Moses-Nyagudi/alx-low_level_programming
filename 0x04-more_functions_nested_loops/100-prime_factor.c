#include "main.h"

/**
 * largestPrimeFactor - Finds the largest prime factor of a number
 * @number: The number to find the largest prime factor for
 *
 * Return: The largest prime factor
 */
double largestPrimeFactor(double number)
{
	double largest = 2;

	while (number > 1)
	{
		if (fmod(number, largest) == 0)
		{
			number /= largest;
		}
		else
		{
			largest++;
		}
	}

	return (largest);
}

/**
 * main - Entry point of the program
 *
 * Return: Always 0
 */
int main(void)
{
	double number = 612852475143;
	double result = largestPrimeFactor(number);

	printf("%.0f\n", result);

	return (0);
}
