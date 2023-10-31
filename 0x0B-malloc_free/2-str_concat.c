#include "main.h"

/**
 * str_concat - Concatinates two arrays.
 * @s1: first array.
 * @s2: second array.
 * Return: pointer to the created array.
*/

char *str_concat(char *s1, char *s2)
{
	int size = 0, i = 0, l = 0, m = 0;
	char *ar;

	if (s1 == NULL && s2 == NULL)
		return (NULL);
	if (s1 != NULL)
	{
		while (s1[size])
			size++;
	}
	if (s2 != NULL)
	{
		while (s2[l])
		{
			size++;
			l++;
		}
	}
	ar = (char *)malloc((size + 1) * sizeof(char));
	if (ar == NULL)
		return (NULL);
	if (s1 != NULL)
	{
		while (s1[i])
		{
			ar[i] = s1[i];
			i++;
		}
	}
	m = i;
	i = 0;
	if (s2 != NULL)
		{
		while (s2[i])
		{
			ar[m + i] = s2[i];
			i++;
		}
	}
	if (ar == NULL)
		return (NULL);
	return (ar);
}
