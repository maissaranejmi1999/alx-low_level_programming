#include "main.h"

/**
 * _puts - function
 * @str : a character
*/

void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
