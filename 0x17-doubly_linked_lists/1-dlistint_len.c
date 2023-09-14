#include "lists.h"
/**
 * dlistint_len - prints the number of elements in a list
 * @h: head
 * Return: count 
*/
size_t dlistint_len(const dlistint_t *h)
{
    size_t count = 0;
    while (h->prev != NULL)
    {
        h = h->prev;
    }
    while (h != NULL)
    {
        count++;
        h = h->next;
    }
    return (count);
}
