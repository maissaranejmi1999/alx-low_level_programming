#include "main.h"

/**
 * rev_string - function
 *
 * @s : variabe
*/

void rev_string(char *s)
{
		int i, j, k;
		char t;

	while (s[i])
	{
		i++;
	}

	k = i;


	for (j = 0; i >= 0 && j <= k; i--)
	{
		s[i] = t[j];
		j++;
	}
}
