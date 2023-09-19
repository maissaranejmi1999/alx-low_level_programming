#include "main.h"

/**
 * *_strcpy - function
 * @dest: an array
 * @src: a variable
 * Return: a char
*/

char *_strcpy(char *dest, char *src)
{
	int j = -1;

	while (src[j] != '\0')
	{
		j++;
		dest[j] = src[j];
	}
	return (dest);
}
