#include "main.h"

/**
 * _memset - C function
 *
 * @s: variable
 * @b: variable
 * @n: variable
*/

char *_memset(char *s, char b, unsigned int n)
{
	int i;

	for (i = 1; i <= n; i++)
	{
		*(s + i) = b;
	}
}
