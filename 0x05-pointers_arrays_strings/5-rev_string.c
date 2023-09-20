#include "main.h"

/**
 * rev_string - function
 *
 * @s : variabe
*/

void rev_string(char *s)
{
	int i, j, k;
	char t[100] = {'0'};

	while (s[i])
	{
		t[i] = s[i];
		i++;
	}

	k = i;

	for (j = 0; j <= k; j++)
	{
		s[j] = t[k - j];
	}
}
