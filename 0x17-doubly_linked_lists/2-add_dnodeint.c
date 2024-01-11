#include "lists.h"
/**
 * add_dnodeint - pointer to function
 * @head: pointer to pointer
 * @n: value of the node
 * retutn: value
*/
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
    dlistint_t *new = malloc(sizeof(dlistint_t));
    if (new == NULL || head == NULL)
    {
        free(new);
        return (NULL);
    }
    new->n = n;
    new->prev = NULL;
    if (*head == NULL)
    {
        *head = new;
        new->next = NULL;
    }
    else
    {
        new->next = *head;
        (*head)->prev = new;
        *head = new;
    }
    return (new);
}