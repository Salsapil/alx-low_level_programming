#include "lists.h"
#include <stdio.h>
#include <stddef.h>
/**
 * listint_len - function
 * @h: check input
 * Return: value
*/
size_t listint_len(const listint_t *h)
{
size_t count;
count = 0;
while (h != NULL)
{
count++;
h = h->next;
}
return (count);
}
