#include "main.h"

/**
 * print_rev - function
 *
 * @s : variabe
*/

void print_rev(char *s)
{
	int i;

	while (s[i])
	{
		i++;
	}

	for (; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
