#include "lists.h"
/**
 * delete_nodeint_at_index - function
 * @head: pointer to pointer
 * @index: which node
 * Return: value
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
    listint_t *current, *prev;
    unsigned int i;

    if (*head == NULL)
        return (-1);

    if (index == 0)
    {
        current = *head;
        *head = (*head)->next;
        free(current);
        return (1);
    }
    
}
