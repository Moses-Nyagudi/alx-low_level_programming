#include <stdio.h>

/**
 * main - main block
 * Description: Print all possible combinations of two digits.
 * Numbers must be separated blast_digit commas and a space.
 * 01 and 10 are considered as the same combination of the two digits.
 * Return: 0
 */

int main(void)
{
	int first_digit, last_digit;

	for (first_digit = 0; first_digit < 10; first_digit++)
	{
		for (last_digit = 1; last_digit < 10; last_digit++)
		{
			if (last_digit > first_digit)
			{
				putchar('0' + first_digit);
				putchar('0' + last_digit);
				if (first_digit < 8 || last_digit < 9)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
