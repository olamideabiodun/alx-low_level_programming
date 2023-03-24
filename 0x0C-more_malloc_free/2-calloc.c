#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * *_calloc - allocates memory for an array using malloc
 * @nmemb: array to allocate memory for
 * @size: size of array
 *
 * Return: returns NULL If malloc fails, then _calloc returns NULL.
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	int *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(nmemb * size);

	if (ptr == NULL)
		return (NULL);

	memset(ptr, 0, nmemb * size);

	return (ptr);
}
