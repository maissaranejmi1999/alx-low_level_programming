#include "function_pointers.h"

/**
 * print_name - function
 * @name: char
 * @f: function poiter
*/

void print_name(char *name, void (*f)(char *))
{
	(*f)(name);
}
