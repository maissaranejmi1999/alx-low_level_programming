#include "function_pointers.h"

/**
 * int_index - function
 * @array: an array
 * @size: size of array
 * @cmp: function pointer
 * Return: int
*/

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array && size && cmp)
	{
		if (size <= 0)
			return (-1);
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]) != 0)
				return (i);
		}
		return (-1);
	}
	return (-1);
}
