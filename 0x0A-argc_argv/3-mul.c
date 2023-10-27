#include <stdio.h>
#include <stdlib.h>

/**
 * main - main entry
 * @argc: number of argumrnts
 * @argv: pointer array
 * Return: Always 0.
 */

int main(int argc, char *argv[])
{
	int mul = 0;

	if (argc == 3)
	{
		mul = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", mul);
	} else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
