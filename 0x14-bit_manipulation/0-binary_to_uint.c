#include "main.h"

/**
 * main - Entry point
 *
 * Description: C program that gives the syghn of the number
 *
 * Return: i
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int i = 0;
	if (b == NULL)
		return (0);

	while (*b != '\0')
	{
		if (*b == '1' || *b == '0')
		{
			i = (i << 1) + (*b - 1);
			b++;
		} else
		{
			return (0);
		}
	}
	return (i);
}
