#include <stdio.h>
#include <stdlib.h>

/**
 * malloc_checked - allocates a memory using malloc
 * @b: size of memory block to be allocated
 *
 * Return: returns a pointer to the allocated memory
 */

void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);

	if (ptr == NULL)
	{
		exit(98);
	}
	return (ptr);
}
