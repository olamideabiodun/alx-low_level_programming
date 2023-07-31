#include "lists.h"

/**
 * listint_len - lists the number of elements
 * @h: pointer to the head
 *
 * Return: len.
 */
size_t listint_len(const listint_t *h)
{
	int len;
	const struct listint_s *current = h;

	len = 0;

	while (current != NULL)
	{
		len++;
		current = current->next;
	}
	return (len);
}
