#include "lists.h"
#include <stdlib.h>
/**
 * free_listint - function
 * @head: check input
 * Return: value
*/
void free_listint(listint_t *head)
{
listint_t *tem;

while (head != NULL)
{
tem = head;
head = head->next;
free(tem);
}
}
