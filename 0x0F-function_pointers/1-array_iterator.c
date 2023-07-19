#include "function_pointers.h"
#include <stdio.h>

/**
 * array_iterator - Executes a function on each element of an array
 * @array: pointer to array
 * @size: size of array
 * @action: pointer to the function to use
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (array != NULL && action != NULL)
	{
		size_t j;
	for (j = 0; j < size; j++)
	{
		action(array[j]);
	}
	}
}
