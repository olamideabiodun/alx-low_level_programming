#include "lists.h"
/**
 * free_dlistint - frees a list
 * @head: head of the list
*/
void free_dlistint(dlistint_t *head)
{
    while (head != NULL)
    free(&head);
}
