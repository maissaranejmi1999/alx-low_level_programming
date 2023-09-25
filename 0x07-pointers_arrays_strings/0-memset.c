#include "main.h"

/**
 * _memset - C function
 *
 * @s: variable
 * @b: variable
 * @n: variable
 * Return: s
*/

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;
	char *l = s;

	for (i = 0; i <= n - 1; i++)
	{
		*(s + i) = b;
	}
	return (l);
}
