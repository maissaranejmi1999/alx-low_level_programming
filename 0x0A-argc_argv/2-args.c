#include <stdio.h>

/**
 * main - main entry
 * @argc: number of argumrnts
 * @argv: pointer array
 * Return: Always 0.
 */

int main(int argc, char *argv[])
{
	int i = 0;

	while (argc--)
	{
		printf("%s\n", argv[i]);
		i++;
	}

	return (0);
}
