#include "main.h"

/**
 * reverse_array - Reverses
 * @a: array
 * @n: number of elements
 */

void reverse_array(int *a, int n)
{
	int i, k = 0;

	for (i = n; i >= n / 2; i--)
	{
		k = a[n - 1 - i];
		a[n - 1 - i] = a[i];
		a[i] = k;
	}
}
