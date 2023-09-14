#include "main.h"

/**
 * print_square - function
 *
 * Description: checks is c is uppercase letter
 *
 * @size: variable
*/

void print_square(int size)
{
	int j, i;

	if (size <= 0)
		_putchar('\n');
	else
	{
		for (i = 0; i < size; i++)
		{
			for (j = 0; j < size; j++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
