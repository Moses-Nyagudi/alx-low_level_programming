#include "main.h"

/**
 * is_positive_number - Checks if a string
 * contains only digits and is positive.
 * @str: The string to check.
 *
 * Return: 1 if the string is a positive number
 * composed of digits, 0 otherwise.
 */

int is_positive_number(char *str)
{
	while (*str)
	{
		if (*str < '0' || *str > '9')
			return (0);
		str++;
	}
	return (1);
}

/**
 * multiply - Multiplies two positive numbers.
 * @num1: The first number.
 * @num2: The second number.
 *
 * Return: The result of the multiplication.
 */

int multiply(char *num1, char *num2)
{
	int result = 0;

	int base = 10;

	int carry = 0;

	int j, i = 0;

	int digit1, digit2, product;

	for (i = 0; num1[i] != '\0'; i++)
	{
		digit1 = num1[i] - '0';
		for (j = 0; num2[j] != '\0'; j++)
		{
			digit2 = num2[j] - '0';
			product = digit1 * digit2 + result[i + j] + carry;
			carry = product / base;
			result[i + j] = product % base;
		}

	}
	return (result);
}

/**
 * main - Entry point of the program.
 * @argc: The number of command-line arguments.
 * @argv: An array of strings containing the command-line arguments.
 *
 * Return: 0 on success, or 98 and an error message on failure.
 */

int main(int argc, char *argv[])
{
	char *num1 = argv[1];

	char *num2 = argv[2];

	int result;

	if (argc != 3)
	{
		printf("Error\n");
		return (98);
	}
	if (!is_positive_number(num1) || !is_positive_number(num2))
	{
		printf("Error\n");
		return (98);
	}

	result = multiply(num1, num2);
	printf("%d\n", result);
	return (0);

}
