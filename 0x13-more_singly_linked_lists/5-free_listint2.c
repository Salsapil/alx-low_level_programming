#include "lists.h"
#include <stdlib.h>
/**
 * free_listint2 - function
 * @head: check input
 * Return: value
*/
void free_listint2(listint_t **head)
{
listint_t *tem;
if (*head == NULL)
{
return;
}
while (*head != NULL)
{
tem = *head;
*head = (*head)->next;
free(tem);
}
*head = NULL;
}
