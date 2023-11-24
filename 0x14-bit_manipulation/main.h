#include <stdio.h>
#include "main.h"

/**
 * binary_to_uint - function
 * @b: const
 * Return: usgn int
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int r;
	int bt;

	if (b == NULL)
		return (0);

	while (*b)
	{
		bt = *b - '0';
		if (bt != 0 && bt != 1)
			return (0);
		r = (r << 1) | bt;
		b++;
	}
	return (r);
}
