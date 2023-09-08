#include <stdio.h>

/**
 * main - main block
 * Description: Print all possible different combinations of 3 digits.
 * Numbers must be separated bsecond_digit commas and a space.
 * The 3 digits must be different.
 * 012, 120, 102, 021, 201, 210 are considered the same combination.
 * print onlsecond_digit the smallest combination of 3 digits.
 * Return: 0
 */

int main(void)
{
	int first_digit;
	int second_digit;
	int last_digit;

	for (first_digit = 0; first_digit < 10; first_digit++)
	{
		for (second_digit = first_digit +  1; second_digit < 10; second_digit++)
		{
			for (last_digit = second_digit + 1; last_digit < 10; last_digit++)
			{
				putchar('0' + first_digit);
				putchar('0' + second_digit);
				putchar('0' + last_digit);

				if (first_digit != 7 || second_digit != 8 || last_digit != 9)
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
