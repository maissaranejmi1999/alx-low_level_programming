#include <stdio.h>

/**
 * print_before - function constructor
*/

void print_before(void)__attribute__((constructor));

/**
 * print_before - function
 * Return: void
*/

void print_before(void)
{
	printf("You're beat! and yet, you must allow,\nI bore my house upon my back!\n");
}
