#include "main.h"

/**
 * _strdup - duplicates an array.
 * @str: the array to duplicate
 * Return: pointer to the duplicated array.
*/

char *_strdup(char *str)
{
	unsigned int size = 0, i = 0;
	char *ar;

	if (str == NULL)
		return (NULL);

	while (str[size])
		size++;

	ar = (char *)malloc((size + 1) * sizeof(char));
	if (ar == NULL)
		return (NULL);

	while (str[i])
	{
		ar[i] = str[i];
		i++;
	}

	return (ar);
}
