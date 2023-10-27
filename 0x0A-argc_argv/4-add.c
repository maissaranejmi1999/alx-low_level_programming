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
	int sum = 0, i, num;

	if (argc < 2)
	{
		printf("0\n");
		return (0);
	}
	for (i = 1; i < argc; i++)
	{
		num = atoi(argv[i]);
		if (num == 0 && argv[i][0] != '0')
		{
			printf("Error\n");
			return (1);

		}
		if (num >= 0)
			sum += atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}
