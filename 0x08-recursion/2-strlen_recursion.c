#include <unistd.h>
#include "main.h"

/**
 * _strlen_recursion - function
 * @s: chane of caracter
 * Return: int
*/

int _strlen_recursion(char *s)
{
	int i = 0;

	if (*s == '\0')
		return (i);
	return (1 + _strlen_recursion(s + 1));
}
