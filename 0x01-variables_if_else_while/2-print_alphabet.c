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

	for (l = 'a'; l <= 'z'; l++)
	{
		putchar(l);
	}

	putchar(new);

	return (0);
}
