#include "lists.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
/**
 * add_node_end - function
 * @head: check input
 * @str: check input
 * Return: value
*/
list_t *add_node_end(list_t **head, const char *str)
{
list_t *new, *tem;
new = malloc(sizeof(list_t));
if (!new)
{
return (NULL);
}
new->str = strdup(str);
new->next = NULL;
if (*head == NULL)
{
*head = new;
return (new);
}
tem = *head;
while (tem->next)
{
tem = tem->next;
}
tem->next = new;
return (new);
}
