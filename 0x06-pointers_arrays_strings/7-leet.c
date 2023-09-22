#include "main.h"

/**
 * leet - function
 * @x: string
 * Return: string
 */
char *leet(char *x)
{
	int i = 0;
	char letters[] = { 'a', 'e', 'o', 't', 'l' };
	char numbers[] = { 4, 3, 0, 7, 1 };
	char *string = x;

	while (*x)
	{
		for (i = 0; i < 5; i++)
		{
			if (*x == letters[i] || *x == letters[i] - 32)
				*x = numbers[i] + '0';
		}
		x++;
	}
	return (string);
}
