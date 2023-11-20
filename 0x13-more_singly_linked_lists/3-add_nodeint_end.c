#include "lists.h"
#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>
/**
 * add_nodeint_end - function
 * @head: check input
 * @n: check input
 * Return: value
*/
listint_t *add_nodeint_end(listint_t **head, const int n)
{
listint_t *new, *tem;
new = malloc(sizeof(listint_t));
if (new == NULL)
{
return (NULL);
}
new->n = n;
new->next = NULL;
if (*head == NULL)
{
*head = new;
return (new);
}
tem = *head;
while (tem->next != NULL)
{
tem = tem->next;
}
tem->next = new;
return (new);
}
