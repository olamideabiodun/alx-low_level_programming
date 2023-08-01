#include "lists.h"

/**
 * createNode - creates a new node
 * @n: node to create
 * @newnode: new node
 *
 * Return: newnode
 */
struct listint_s *createNode(int n)
{
	struct listint_s *newnode = malloc(sizeof(struct listint_s));

	if (newnode == NULL)
	{
		return (NULL);
	}
	newnode->n = n;
	newnode->next = NULL;

	return (newnode);
}

/**
 * add_nodeint - add a node at the beginning
 * @head: pointer to the head
 * @n: node to be added
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	struct listint_s *newnode = createNode(n);

	if (newnode == NULL)
	{
		return (NULL);
	}
	newnode->next = *head;
	*head = newnode;
	return (newnode);
}
