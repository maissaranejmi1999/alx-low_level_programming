#include "main.h"

/**
 * _strchr - function
 * @s: string
 * @c: string
 * Return: (Success) first occurence of c
 */

char *_strchr(char *s, char c)
{
	char *l;

	if (s == NULL)
		return (NULL);
	else if (s != NULL)
	{
		for (l = s; *l; l++)
			if (*l == c)
				return (l);
	}
	return (l);
}
