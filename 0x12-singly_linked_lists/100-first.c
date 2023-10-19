#include "lists.h"
/**
 * my_constructor - Constructor function to be executed before main.
 *
 * Description: This function is executed before the main function and
 *              prints the specified messages.
 */
void __attribute__((constructor)) my_constructor()
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
