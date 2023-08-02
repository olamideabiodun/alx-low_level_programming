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
 * add_nodeint_end - add a new node at the end of a list
 * @head: pointer to the pointer to the head of a list
 * @n: node to add
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	struct listint_s *newnode = createNode(n);
	struct listint_s *current;

	if (*head == NULL)
	{
		*head = newnode;

		return (NULL);
	}
	current = *head;
	while (current->next != NULL)
	{
		current = current->next;
	}
	current->next = newnode;
	return (newnode);
}
