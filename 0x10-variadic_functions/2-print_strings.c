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
	char *str;

	va_start(args, n);
	if (!n)
	{
		printf("\n");
		return;
	}

	for (; i < n; i++)
	{
		str = va_arg(args, char *);
		printf("%s%s", (str ? str : "(nil)"), (separator ? separator : ""));
	}
	printf("\n");
	va_end(args);
}
