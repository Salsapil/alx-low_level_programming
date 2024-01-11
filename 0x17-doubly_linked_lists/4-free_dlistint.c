#include "lists.h"
/**
 * free_dlistint - function to free
 * @head: pointer to head
 * Return: void
 */
void free_dlistint(dlistint_t *head)
{
dlistint_t *temp;

while (head != NULL)
{
temp = head->next;
free(head);
head = temp;
}
}
