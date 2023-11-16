#include "lists.h"
#include <stdlib.h>
/**
 * free_list - function
 * @head: check input
 * Return: void
*/
void free_list(list_t *head)
{
list_t *tem;

while (head != NULL)
{
tem = head;
head = head->next;
free(tem->str);
free(tem);
}
}
