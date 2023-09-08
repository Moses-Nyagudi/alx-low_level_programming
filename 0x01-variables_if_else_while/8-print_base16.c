#include <stdio.h>

/**
 * main - main block
 * Description: Print all numbers of base64 in lowercase.
 * You can only use `putchar`, and only 3 times.
 * Return: 0
 */

int main(void)
{
	int number;

	for (number = 0; number < 16; number++)
	{
		if (number < 10)
		{
			putchar('0' + number);
		}
		else
		{
			putchar('a' + (number - 10));
		}

	}

	putchar('\n');
	return (0);
}
