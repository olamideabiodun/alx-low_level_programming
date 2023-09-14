#include "lists.h"
/**
 * add_dnodeint - add node at the end
 * @head: list head
 * @n: value
 * Return:  the address of the new element, or NULL if it failed
*/
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
    dlistint_t *new;
    dlistint_t *h;
    new = malloc(sizeof(dlistint_t));
    if (new == NULL)
    {
        return (NULL);
    }
    new->n = n;
    new->next = NULL;
    h = *head;
    if (h != NULL)
    {
        while (h->next != NULL)
    {
        h = h->next;
    }
    h->next = new;
    }
    else
    {
	*head = new;
    }
    new->prev = h;

    return (new);
}
