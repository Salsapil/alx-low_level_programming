#include "lists.h"
/**
 * print_dlistint - function to print
 * @h: pointer to head
 * return: value
 */
size_t print_dlistint(const dlistint_t *h)
{
size_t i;
for (i = 0; h != NULL; i++)
{
printf("%d\n", h->n);
h = h->next;
}
return (i);
}
