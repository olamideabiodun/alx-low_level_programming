#include "function_pointers.h"
#include <stdio.h>

/**
 * int_index - searches for an integer
 * @size: number of elements in the array
 * @array: pointer to array
 * @cmp: function pointer to compare value
 *
 * Return: -1 if no elements pr size <= 0.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	if (array != NULL && size > 0 && cmp != NULL)
	{
		int i;

		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]) != 0)
			{
				return (i);
			}
		}
	}
	return (-1);
}
