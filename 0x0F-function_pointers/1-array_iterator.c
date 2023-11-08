#include "function_pointers.h"

/**
 * array_iterator - function
 * @array: pointer
 * @size: the size
 * @action: function pointer
*/

void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i = 0;

	if (array && size && action)
	{
		for (; i < size; i++)
			action(array[i]);
	}
}
