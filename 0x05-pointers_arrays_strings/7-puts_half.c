#include "main.h"

/**
 * puts_half - function
 * @str : a character
*/

void puts_half(char *str)
{
	int i = 0;

	while (str[i])
		i++;
	if (i % 2 == 0)
	{
		i = i / 2;
		while (str[i])
		{
			_putchar(str[i]);
			i++;
		}
	} else if (i % 2 != 0)
	{
		i = ((i - 1) / 2) + 1;
		while (str[i])
		{
			_putchar(str[i]);
			i++;
		}
	}
	_putchar('\n');

}
