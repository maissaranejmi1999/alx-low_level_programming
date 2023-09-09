#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: C program that writes alphabet
 *
 * Return: 0
*/

int main(void)
{

	char l, L, new;

	new = '\n';

	for (l = 'a'; l <= 'z'; l++)
	{
		putchar(l);
	}
	for (L = 'A'; L <= 'Z'; l++)
	{
		putchar(l);
	}

	putchar(new);
	return (0);


}
