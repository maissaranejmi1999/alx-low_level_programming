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
	char a, i, n = '\n';

	for (i = '0'; i <= '9'; i++)
	{
		putchar(i);
	}

	for (a = 'a'; a <= 'f'; a++)
	{
		putchar(a);
	}

	putchar(n);
	return (0);

}
