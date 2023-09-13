#include "main.h"


/**
 * print_to_98 - Entry point
 *
 * @n: variable
 *
*/

void print_to_98(int n)
{
	if (n <= 98)
	{
		for (; n <= 97; n++)
		{
			printf("%d, ", n);
		}
	} else if (n > 98)
	{
		for (; n >= 99; n--)
		{
			printf("%d, ", n);
		}
	}
	printf("98\n");
}
