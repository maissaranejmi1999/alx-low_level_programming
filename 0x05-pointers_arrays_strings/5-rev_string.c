#include "main.h"

/**
 * rev_string - function
 *
 * @s : variabe
*/

void rev_string(char *s)
{
	int i = 0, j, k = 0;
	char t[100] = {'\0'};

	while (s[i] != '\0')
	{
		t[i] = s[i];
		i++;
	}

	k = i - 1;

	for (j = 0; j <= k; j++)
	{
		s[j] = t[k - j];
	}
}
