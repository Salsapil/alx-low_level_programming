#include "lists.h"
/**
 * insert_dnodeint_at_index - function pointer
 * @h: pointer to pointer
 * @idx: index
 * @n: number
 * Return: value
*/
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
dlistint_t *temp, *new_node;
unsigned int count = 0;

if (h == NULL)
return (NULL);
new_node = malloc(sizeof(dlistint_t));
if (new_node == NULL)
return (NULL);
new_node->n = n;
new_node->prev = NULL;
new_node->next = NULL;
if (idx == 0)
{
new_node->next = *h;
if (*h != NULL)
(*h)->prev = new_node;
*h = new_node;
return (new_node);
}
temp = *h;
while (temp != NULL && count < idx - 1)
{
temp = temp->next;
count++;
}
if (temp == NULL)
{
free(new_node);
return (NULL);
}
new_node->next = temp->next;
new_node->prev = temp;
if (temp->next != NULL)
temp->next->prev = new_node;
temp->next = new_node;
return (new_node);
}
