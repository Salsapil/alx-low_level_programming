#include "lists.h"
#include <stdlib.h>
/**
 * insert_nodeint_at_index - function
 * @head: check input
 * @idx: check input
 * @n: check input
 * Return: value;
*/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
listint_t *new, *current = *head;
unsigned int count;
count = 0;

if (head == NULL)
return (NULL);
new = malloc(sizeof(listint_t));
if (new == NULL)
return (NULL);
new->n = n;
if (idx == 0)
{
new->next = *head;
*head = new;
return (new);
}
while (current != NULL)
{
if (count == idx - 1)
{
new->next = current->next;
current->next = new;
return (new);
}
count++;
current = current->next;
}
free(new);
return (NULL);
}
