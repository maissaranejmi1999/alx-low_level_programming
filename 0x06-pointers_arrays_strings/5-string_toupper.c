#include "main.h"

/**
 * string_toupper - function
 * @x: variable
 * Return: x
*/

char *string_toupper(char *x)
{
	int i = 0;

	while (x[i] != '\0')
	{
		if (x[i] >= 61 && x[i] <= 122)
			x[i] = x[i] - 20;
		i++;
	}
	return (x);
}
