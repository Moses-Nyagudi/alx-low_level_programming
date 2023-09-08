#include <stdio.h>

/**
 * main - main block
 * Description: Print all possible combinations fo single-digit numbers.
 * Return: 0
 */

int main(void)
{
	int first_digit;
	int last_digit;

	for (first_digit = 0; first_digit < 10; first_digit++)
	{
		for (last_digit = 0; last_digit < 10; last_digit++)
		{
			putchar('0' + first_digit);
			putchar(',');
			putchar(' ');
			putchar('0' + last_digit);
			putchar(' ');
		}
	}

	putchar('\n');

	return (0);
}
