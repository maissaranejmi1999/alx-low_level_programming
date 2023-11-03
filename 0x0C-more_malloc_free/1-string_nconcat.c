#include "main.h"


/**
 * string_nconcat - function
 * @s1: ptr to a string
 * @s2: ptr to a string
 * @n: variable
 * Return: a ptr to a char
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int i = 0, j = 0, k = 0;
	char *ptr;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[j])
		j++;

	ptr = malloc(j + n + 1);

	if (ptr == NULL)
		return (NULL);
	while (i < j)
	{
		ptr[i] = s1[i];
		i++;
	}

	for (; k < (int)n && s2[k] != '\0'; k++)
	{
		ptr[i] = s2[k];
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}
