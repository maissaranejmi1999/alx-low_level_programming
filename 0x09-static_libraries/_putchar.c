#include "main.h"
#include <unistd.h>

/**
 * _putchar - Entry point
 *
 * @c: a char
 *
 * Return: an int
*/

int _putchar(char c)
{
	return (write(1, &c, 1));
}
