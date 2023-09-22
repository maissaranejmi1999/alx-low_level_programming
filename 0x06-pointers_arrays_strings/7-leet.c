#include "main.h"


/**
 * leet - function
 * @x: variable
 * Return: x
*/

char *leet(char *x)
{
	int i = 0;

	while (x[i] != '\0')
	{
		if (x[i] == 'a' || x[i] == 'A')
				x[i] = '3';

		i++;
	}
	return (x);
}
