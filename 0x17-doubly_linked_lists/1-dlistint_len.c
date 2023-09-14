#include "lists.h"
/**
 * dlistint_len - prints the number of elements in a list
 * @h: head
 * Return: count 
*/
size_t dlistint_len(const dlistint_t *h)
{
    int count = 0;
    if (h == NULL)
    {
        return (count);
    }
    while (h->prev != NULL)
    {
        h = h->prev;
    }
    while (h->next != NULL)
    {
        count++;
        h = h->next;
    }
    return (count);
}
