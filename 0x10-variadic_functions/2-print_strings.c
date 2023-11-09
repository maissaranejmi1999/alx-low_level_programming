#include "variadic_functions.h"
#include <stdarg.h>

/**
 * print_strings - function
 * @separator: string ptr
 * @n: num
*/

void print_strings(const char *separator, const unsigned int n, ...)
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
		const char *str = va_arg(args, char *);
		if (str == NULL)
			printf("(nil)");
		printf("%s", str);
		if (separator != NULL && i != n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(args);
}
