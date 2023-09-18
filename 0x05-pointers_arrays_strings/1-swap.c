#include "main.h"

/**
 * swap_int - function
 *
 * @b : variable
 *
 * @a : variable
*/

void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
