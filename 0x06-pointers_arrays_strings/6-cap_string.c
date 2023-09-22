#include "main.h"

/**
 * cap_string - function
 * @x: variable
 * Return: x
*/

char *cap_string(char *x)
{
	int i = 0;

	while (x[i] != '\0')
	{
		if (x[i] == 32)
			if (x[i] >= 97 && x[i] <= 122)
				x[i + 1] = x[i + 1] - 32;
		i++;
	}
	return (x);
}
