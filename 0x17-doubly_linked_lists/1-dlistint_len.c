#include "lists.h"
/**
 * dlistint_len - function to print
 * @h: pointer to head
 * Return: value
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
