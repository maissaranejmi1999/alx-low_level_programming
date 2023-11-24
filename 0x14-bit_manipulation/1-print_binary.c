#include "main.h"
#include <stdio.h>

/**
 * print_binary - function
 * @n: unsg long
 */

void print_binary(unsigned long int n)
{
	unsigned int s = sizeof(unsigned long int), i;
	unsigned long int m;

	for (i = s - 1; i < s; i--)
	{
		m = 1UL << i;
		putchar((n & m) ? '1' : '0');
	}
	putchar('\n');
}

int main() {
    unsigned long int number = 42; // Change this to your desired number
    printf("Binary representation of %lu: ", number);
    print_binary(number);

    return 0;
}
