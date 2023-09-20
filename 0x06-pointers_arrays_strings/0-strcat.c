#include "main.h"

/**
 * _strcat - function
 *
 * @src: : array
 *
 * @dest : array
 *
 * Return: addition of the two strings
*/

char *_strcat(char *dest, char *src)
{
	int i = 0, j = 0;

	while (dest[i] != '\0')
		i++;

	while (str[j] != '\0')
	{
		dest[i + j] = str[j];
		j++;
	}
	return (dest);
}
