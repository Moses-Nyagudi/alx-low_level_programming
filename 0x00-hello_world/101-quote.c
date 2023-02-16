#include <studio.h>
/**
 * Function that returns 1 as its output
 */
int main(void)
{
	int number = 0;
	char quote = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	while (quote[number] != '\0')
	{
		putchar(quote[number]);
		number++;
	}
	return(1);
}
