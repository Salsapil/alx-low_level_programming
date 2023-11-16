#include "lists.h"
/**
 * list_len - function
 * @h: check input
 * Return: value
*/
size_t list_len(const list_t *h)
{
int i;
i = 0;
while (h != NULL)
{
h = h->next;
i++;
}
return (i);
}
