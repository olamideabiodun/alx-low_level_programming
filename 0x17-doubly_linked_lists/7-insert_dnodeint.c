#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at index
 * @h: head of the list
 * @idx: index of the new node
 * @n: value of the new node
 * Return: the address of the new node, or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *nn;
	dlistint_t *head;
	unsigned int i;

	nn = NULL;
	if (idx == 0)
		nn = add_dnodeint(h, n);
	else
	{
		head = *h;
		i = 1;
		if (head != NULL)
			while (head->prev != NULL)
				head = head->prev;
		while (head != NULL)
		{
			if (i == idx)
			{
				if (head->next == NULL)
					nn = add_dnodeint_end(h, n);
				else
				{
					nn = malloc(sizeof(dlistint_t));
					if (nn != NULL)
					{
						nn->n = n;
						nn->next = head->next;
						nn->prev = head;
						head->next->prev = nn;
						head->next = nn;
					}
				}
				break;
			}
			head = head->next;
			i++;
		}
	}

	return (nn);
}
