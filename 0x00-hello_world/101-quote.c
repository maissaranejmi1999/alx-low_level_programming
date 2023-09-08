#include <stdio.h>
#include <unistd.h>

/**
 * main - Entry point
 *
 * Description: C program that prints a quotqtion without using puts or printf
 *
 * Return: 1
*/

int main(void)
{
	char dora[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	write(1, dora, 59);

	return (1);
}
