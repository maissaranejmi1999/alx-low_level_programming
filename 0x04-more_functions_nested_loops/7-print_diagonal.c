#include "main.h"

/**
 * print_diagonal - function
 *
 * Description: checks is c is uppercase letter
 *
 * @n: variable
*/

void print_diagonal(int n)
{
	int j, i;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (i = 0; i < n; i++)
		{
			for (j = 0; j <= i; j++)
			{
				if (j == i)
					_putchar(92);
				else
					_putchar(' ');
			}
			_putchar('\n');
		}
		_putchar('\n');
	}
}
