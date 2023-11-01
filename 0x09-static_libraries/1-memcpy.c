#include "main.h"

/**
 * _memcpy - function
 * @dest: variable
 * @src: variable
 * @n: variable
 * Return: l
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;
	char *l = dest;

	for (i = 0; i < n; i++)
	{
		*(dest + i) = *(src + i);
	}
	return (l);
}
