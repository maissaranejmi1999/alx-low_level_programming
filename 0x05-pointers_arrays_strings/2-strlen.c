#include "main.h"

/**
 * _strlen - function
 *
 * @s : variable
 *
 * Return: lenght of string
*/

int _strlen(char *s)
{
	int i = 0;

	for (; *s != '\0'; s++)
	{
		i++;
	}
	return (i);
}
