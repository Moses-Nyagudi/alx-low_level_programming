#include "lists.h"

/* Constructor function to be executed before main */
void __attribute__((constructor)) my_constructor()
{
	printf("You're beat! and yet, you must allow,\nI bore my house upon my back!\n");
}
