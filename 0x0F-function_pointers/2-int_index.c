#include "function_pointers.h"

/**
 * int_index - function
 * @array: varible
 * @size: variable
 * @cmp: variable
 * Return: int
*/

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array && size && cmp)
	{
		if (size > 0)
		{
			for (i = 0; i < size; i++)
			{
				if (cmp(array[i]))
				{
					return (i);
				}
			}
			return (-1);
		} else
			return (-1);
	}
	return (-1);
}
