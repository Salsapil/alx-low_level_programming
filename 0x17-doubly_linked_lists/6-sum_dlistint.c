#include "lists.h"
/**
 * sum_dlistint - function
 * @head: pointer
 * Return: value
*/
int sum_dlistint(dlistint_t *head)
{
int sum = 0;
dlistint_t *temp = head;

while (temp != NULL)
{
sum += temp->n;
temp = temp->next;
}

return (sum);
}
