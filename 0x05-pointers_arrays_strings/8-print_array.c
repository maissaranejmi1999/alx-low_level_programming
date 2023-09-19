#include "main.h"

/**
 * print_array - function
 * @a : an array
 * @n : a variable
*/

void print_array(int *a, int n)
{
	int i = 0;

	while (i <= n)
	{
		if (i != n)
		{
			_putchar(a[i]);
			_putchar(',');
			_putchar(' ');
		} else if (i == n)
		{
			_putchar(a[i]);
			_putchar('\n');
		}
	}
}
