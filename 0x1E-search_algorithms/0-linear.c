#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "search_algos.h"

/**
 * linear_search - function to search for values linearly
 * @array: array of the value to search
 * @size: size of the array
 * @value: value to search for
 * Return: result index or -1 if not found
*/

int linear_search(int *array, size_t size, int value)
{
    size_t x;

    for (x = 0; x < size; x++)
    {
        printf("Value checked array[%ld] = [%d]\n", x, array[x]);
        if (array[x] == value)
        {
            return (x);
            }
    }
    return (-1);
}
