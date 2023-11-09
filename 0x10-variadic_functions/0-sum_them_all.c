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
	int i = 0, sum = 0;

	if (n == 0)
		return (0);

	va_start(args, n);
	for (; i < n; i++)
	{
		sum += va_arg(args, int)
	}
	va_end(args);
	return (sum);
}
