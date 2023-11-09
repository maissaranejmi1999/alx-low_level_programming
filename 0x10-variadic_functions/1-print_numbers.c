#include "variadic_functions.h"
#include <stdarg.h>

/**
 * print_numbers - function
 * @separator: string ptr
 * @n: num
*/

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i = 0;

	va_start(args, n);
	if (!n)
	{
		printf("\n");
		return;
	}

	for (; i < n; i++)
	{
		printf("%d", va_arg(args, int));
		if (separator != NULL && i != n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(args);
}
