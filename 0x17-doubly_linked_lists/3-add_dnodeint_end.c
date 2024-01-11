#include "lists.h"
/**
 * add_dnodeint_end - pointer to function
 * @head: pointer to pointer
 * @n: value of the node
 * retutn: value
*/
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
    dlistint_t *new = malloc(sizeof(dlistint_t)), *node;
    if (new == NULL || head == NULL)
    {
        free(new);
        return (NULL);
    }
    new->n = n;
    new->prev = NULL;
    if (*head == NULL)
    {
        new->next = NULL;
        *head = new;
    }
    else
    {
        node = *head;
        while (node->next)
        {
            node = node->next;
        }
        node->next = new;
        node->prev = node;
    }
    return (new);
}