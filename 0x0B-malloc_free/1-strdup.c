#include "main.h"

/**
 * _strdup - duplicates an array.
 * @str: the array to duplicate
 * Return: pointer to the duplicated array.
*/

char *_strdup(char *str)
{
	int size = 0, i = 0;

	if (str == NULL)
		return (NULL);

	while (str[size])
		size++;

	char *ar = (char *)malloc(size * sizeof(char));

	if (ar == NULL)
		return (NULL);

	while (str[i])
	{
		ar[i] = str[i];
		i++;
	}
	if (str != ar)
		return (NULL);

	return (ar);
}
