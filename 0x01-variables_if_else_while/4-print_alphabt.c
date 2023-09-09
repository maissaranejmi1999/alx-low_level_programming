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
	char l, new;

	new = '\n';

	for (l = 'a'; l <= 'z'; l++)
	{
		if (l == 'q')
			l += 0;
		else if (l == 'e')
			l += 0;
		else if (l != 'q' && l != 'e')
			putchar(l);
	}
	putchar(new);
	return (0);
}
