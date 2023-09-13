#include "main.h"
#include <ctype.h>

/**
 * _islower - Entry
 *
 * @c: checks input of function
 *
 * Return: 0 or 1
*/

int _islower(int c)
{

	if (c >= 97 && c <= 122)
	{
		return (1);
	} else if (c <= 97 && c >= 122)
	{
		return (0);
	}
}
