#include <stdio.h>
#include "dog.h"

/**
 * print_dog - function
 * @d: struct
 * Return: void
 */

void print_dog(struct dog *d)
{
	if (d)
	{
		if ((*d).name != NULL)
		{
			printf("Name: %s\n", (*d).name);
		} else
		{
			printf("Name: (nil)");
		}

	}
}
