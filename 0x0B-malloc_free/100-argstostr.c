#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * argstostr - function
 * @ac: num of arg
 * @av: pointer to a pointer
 * Return: a pointer
*/

char *argstostr(int ac, char **av)
{
	int i, j = 0, size = 0;
	char *ar;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
		size += strlen(av[i]) + 1;

	ar = (char *)malloc((size + 1) * sizeof(char));

	if (ar == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		strcpy(ar + j, av[i]);
		j += strlen(av[i]);
		ar[j] = '\n';
		j++;
	}
	return (ar);
}
