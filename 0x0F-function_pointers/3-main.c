#include "3-calc.h"

/**
 * main - The main function for the calculator program.
 * @argc: The number of command-line arguments.
 * @argv: An array of strings containing command-line arguments.
 *
 * Return: 0 on success, or appropriate exit status on error.
 */

int main(int argc, char *argv[])
{
	int num1, num2;

	char o;

	int result;

	int (*func_ptr)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);

	func_ptr = get_op_func(argv[2]);

	if (!func_ptr)
	{
		printf("Error\n");
		exit(99);
	}

	o = *argv[2];

	if ((o == '/' || o == '%') && num2 == 0)
	{
		printf("Error\n");
		exit(100);
	}

	result = func_ptr(num1, num2);
	printf("%d\n", result);

	return (0);

}
