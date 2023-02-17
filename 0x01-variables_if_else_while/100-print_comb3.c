#include <stdio.h>
/**
  * main - entry point for the program
  * Return: returns 0 if the program is executed successfully
  */
int main(void)
{
	int i;
	int j;

	for (i = 0; i < 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			if (i < j && i != j)
			{
				putchar('0' + i);
				putchar('0' + j);
				if (10 * i + j != 89)
				{
					putchar(',');
					putchar(' ');
				}
				else
				{
					break;
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
