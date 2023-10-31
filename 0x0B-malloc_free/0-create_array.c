#include "main.h"

/**
 * create_array - Creates an array of CHARs.
 * @size: size of array.
 * @c: initializer.
 * Return: pointer to the created array.
*/

char *create_array(unsigned int size, char c)
{
	unsigned int i = 0;
	char *ar = (char *)malloc((size + 1) * sizeof(char));

	if (ar == NULL || size == 0)
		return (NULL);

	while (i < size)
	{
		ar[i] = c;
		i++;
	}
	ar[size] = '\0';
	return (ar);
}
