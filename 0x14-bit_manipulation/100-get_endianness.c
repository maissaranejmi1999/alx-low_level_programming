#include <stdio.h>
#include "main.h"

/**
 * get_endianness - function
 * Return: int
 */

int get_endianness(void)
{
	unsigned int num = 1;
	char *byte = (char *)&num;

	return ((*byte == 1) ? 1 : 0);
}
