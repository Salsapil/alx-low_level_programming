#include "lists.h"
#include <stdlib.h>
/**
 * pop_listint - function
 * @head: check input
 * Return: 0;
*/
int pop_listint(listint_t **head)
{
listint_t *tem;
int data;

if (*head != NULL)
{
tem = *head;
data = tem->n;
*head = (*head)->next;
free(tem);
return (data);

}
else
{
return (0); 
}
}
