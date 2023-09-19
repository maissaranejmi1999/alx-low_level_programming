#include "main.h"

/**
 * *_strcpy - function
 * @dest: an array
 * @src: a variable
 * Return: a char
*/

char *_strcpy(char *dest, char *src)
{
	int j = 0;

	while (src[j] != '\0')
	{
		dest[j] = src[j];
		j++;
	}
	return (dest);
}
