#include "lists.h"
/**
 * print_dlistint - function to print
 * @h: pointer to head
 * return: value
 */
size_t dlistint_len(const dlistint_t *h)
{
    size_t i;
    for (i = 0; h != NULL; i++)
    {
        h = h->next;
    }
    return (i);
}