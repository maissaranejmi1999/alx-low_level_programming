#include "main.h"

/**
 * print_sign - Entry
 *
 * @n: checks input of function
 *
 * Return: 0 or 1
*/

int print_sign(int n)
{
	if (n > 0)
	{
		putchar('+');
		return (1);
	} else if (n == 0)
	{
		putchar('0');
		return (0);
	} else if (n < 0)
	{
		putchar('-');
		return (-1);
	}
	return (0);
}
