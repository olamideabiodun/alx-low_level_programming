#include "lists.h"

/**
 * list_len - lists number of elements
 * @h: pointer to the head
 *
 * Return: counts of elements
 */

size_t list_len(const list_t *h)
{
	size_t count = 0;
	const list_t *current = h;

	while (current != NULL)
	{
		count++;
		current = current->next;
	}
	return (count);
}
