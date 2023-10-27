#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - main entry
 * @argc: number of argumrnts
 * @argv: pointer array
 * Return: 0 or 1.
 */

int main(int argc, char *argv[])
{
	int sum = 0;

	while (--argc)
	{
		char *char_ptr = argv[argc];

		for (; *char_ptr; char_ptr++)
		{
			if (*char_ptr < '0' || *char_ptr > '9')
			{
				return (printf("Error\n"), 1);
			}
		}
		sum += atoi(argv[argc]);
	}
	printf("%d\n", sum);

	return (0);
}
