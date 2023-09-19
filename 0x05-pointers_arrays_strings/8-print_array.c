#include "main.h"
#include <stdio.h>

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
			printf("%d, ", a[i]);
		} else if (i == n)
		{
			printf("%d\n", (a[i]);
		}
		i++;
	}
}
