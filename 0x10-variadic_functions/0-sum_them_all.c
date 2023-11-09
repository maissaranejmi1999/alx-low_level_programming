#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - function
 * @n: num
 * Return: int
*/

int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	int sum = 0;
	unsigned int i = 0;

	va_start(args, n);
	if (n == 0)
		return (0);

	for (; i < n; i++)
	{
		sum += va_arg(args, int);
	}
	va_end(args);
	return (sum);
}
