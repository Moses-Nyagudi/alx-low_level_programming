#!/bin/bash
#include <stdio.h>
int main(void)
{
	int variable_1;
	long int variable_2;
	long long int variable_3;
	char variable_4;
	float variable_5;

	printf("Size of a char: %lu byte(s)\n",
			(unsigned long)(sizeof(variavle_4)));
	printf("Size of an int: %lu byte(s)\n",
			(unsigned long)sizeof(variable_1));
	printf("Size of a long int: %lu byte(s)\n",
			(unsigned long)sizeof(variable_2));
	printf("Size of a long long int: %lu byte(s)\n",
			(unsigned long)sizeof(variable_3));
	printf("Size of a float: %lu byte(s)\n",
			(unsigned long)sizeof(variable_5));
	return (0);
}
