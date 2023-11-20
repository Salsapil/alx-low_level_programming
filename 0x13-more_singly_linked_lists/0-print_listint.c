#include "lists.h"
#include <stdio.h>
#include <stddef.h>
/**
 * print_listint - function
 * @h: check input
 * Return: value
*/
size_t print_listint(const listint_t *h)
{
size_t count;
count = 0;
while (h != NULL)
{
count++;
printf("%d\n", h->n);
h = h->next;
}
return (count);
}
