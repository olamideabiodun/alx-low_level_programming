#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * *create_array - Creates an array of chars
 * @size: th size of the array
 * @c:the character to initialize with the array
 *
 * Return: returns null if malloc fails
 */

char *create_array(unsigned int size, char c)
{
	if (size == 0)
		return (NULL);

	char *arr = malloc(sizeof(char) * size);

	if (arr == NULL)
		return (NULL);

	for (unsigned int i = 0; i < size; i++)
		arr[i] = c;

	return (arr);
}
