#include "lists.h"

/**
 * print_listint - function that prints the number of elements
 * @h: the pointer to the head
 *
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	int num;
	const struct listint_s *current = h;

	num = 0;
	while (current != NULL)
	{
		printf("%d\n", current->n);
		num++;
		current = current->next;
	}
	return (num);
}
