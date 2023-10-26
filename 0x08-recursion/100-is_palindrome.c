#include "main.h"

/**
 * is_palindrome - check the code
 * @s: chaine of character
 * Return: 0 or 1.
 */

int is_palindrome(char *s)
{
	int i = 0, j = 0, x = 0, r = 0;

	while (s[j])
	{
		j++;
	}
	i = j - 1;
	if ((i % 2) == 0)
	{
		while (i >= (j / 2))
		{
			if (s[i] != s[x])
			{
				r++;
				break;
			}
			i--;
			x++;
		}
	} else
	{
		while (i > ((j - 1) / 2))
		{
			if (s[i] != s[x])
			{
				r++;
				break;
			}
			i--;
			x++;
		}
	}
	return ((r == 0) ? 1 : 0);
}
