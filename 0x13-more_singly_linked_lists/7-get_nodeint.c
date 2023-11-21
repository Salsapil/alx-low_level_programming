#include "lists.h"
/**
 * get_nodeint_at_index - function
 * @head: check input
 * @index: check input
 * Return: value
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
listint_t *current = head;
unsigned int count = 0;

while (current != NULL)
{
if (count == index)
return (current);
count++;
current = current->next;
}
return (NULL);
}
