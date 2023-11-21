#include "lists.h"
#include <stdlib.h>
/**
 * free_listint2 - function
 * @head: check input
 * Return: value
*/
void free_listint2(listint_t **head)
{
listint_t *tem, *h;
if (*head == NULL)
{
return;
}
else
{
h = *head;
while (h != NULL)
{
tem = h;
h = h->next;
free(tem);
}
*head = NULL;
}
}
