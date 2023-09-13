#include "main.h"


/**
 * print_last_digit - Entry point
 *
 * @n: parameter to whom we define the last dijit
 *
 * Return: 0
*/
int print_last_digit(int n)
{
	int m, l;

	m = n % 10;

	if (m >= 0)
		l = m;
	else
		l = -1 * m;

	_putchar(l + '0');
	return (l);
}
