#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - creates an array
 * @size: size of the array
 * @c: char
 *
 * Return: pointer to the array, else NULL
 */
char *create_array(unsigned int size, char c)
{
	char *a;
	unsigned int y;

	if (size == 0)
		return (NULL);

	a = malloc(size * sizeof(char));
	if (a == NULL)
		return (NULL);

	for (y = 0; y < size; y++)
		a[y] = c;

	return (a);
}
