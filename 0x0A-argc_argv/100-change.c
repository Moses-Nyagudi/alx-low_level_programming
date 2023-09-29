#include "main.h"

/**
 * main - Entry point of the program
 * @argc: The number of command-line arguments
 * @argv: An array containing the command-line arguments
 *
 * Return: 0 on success, 1 on error
 */
int main(int argc, char *argv[])
{
	int change;
	int coins = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	change = atoi(argv[1]);

	while (change > 0)
	{
		coins++;
		if ((change - 25) >= 0)
		{
			change -= 25;
		}
		else if ((change - 10) >= 0)
		{
			change -= 10;
		}
		else if ((change - 5) >= 0)
		{
			change -= 5;
		}
		else if ((change - 2) >= 0)
		{
			change -= 2;
		}
		else
			change--;
	}

	printf("%d\n", coins);

	return (0);
}
