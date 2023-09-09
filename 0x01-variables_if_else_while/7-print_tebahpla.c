#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: C program that types alphabet
 *
 * Return: 0
*/

int main(void)
{
	char l, new;

	new = '\n';

	for (l = 'z'; l >= 'a'; l--)
	{
		putchar(l);
	}
	putchar(new);
	return (0);
}
