#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * strtow - function
 * @str: array of chars
 * Return: a pointer to a pointer
*/

char **strtow(char *str)
{
	int i = 0, k = 0, j;
	char **arr, *a;
	
	if (str == NULL || str == "")
		return (NULL);

	while (str[i])
		i++;
	a = (char *)malloc((i + 1) * sizeof(char));
	arr = (char **)malloc((i + 1) * sizeof(char *));
	k = i;
	i = 0;
	for (j = 0; j < k; j++)
	{
		if (str[j] == ' ')
		{
			arr[i] = a;
			i++;
			l = 0;
		}
		str[j] = a[l];
		l++;
	}

	return (arr); 
}
