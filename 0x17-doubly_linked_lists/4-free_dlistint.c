#include "lists.h"
/**
 * free_dlistint - frees a list
 * @head: head of the list
*/
void free_dlistint(dlistint_t *head)
{
    dlistint_t *h;

    while (head != NULL)
    {
        h = head;
        head = head->next;
    free(h);
}
