#include <stdio.h>
#include <stdlib.h>

/**
 * main - Program entry point.
 * @argc: The number of command-line arguments.
 * @argv: An array of strings containing command-line arguments.
 *
 * Return: 0 on success, or appropriate exit status on error.
 */

int main(int argc, char *argv[])
{

	int i, num_bytes;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	num_bytes = atoi(argv[1]);

	if (num_bytes <= 0)
	{
		printf("Error\n");
		return (2);
	}

	unsigned char *main_ptr = (unsigned char *)main;

	for (i = 0; i < num_bytes; i++)
	{
		if (i == num_bytes - 1)
		{
			printf("%02hhx\n", main_ptr[i]);
		}
		else
		{
			printf("%02hhx ", main_ptr[i]);
		}
	}

	return (0);

}
