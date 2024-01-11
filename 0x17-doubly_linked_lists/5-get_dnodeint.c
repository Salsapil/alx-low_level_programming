#include "lists.h"
/**
 * get_dnodeint_at_index - pointer to function
 * @head: pointer to head
 * @index: index
 * return: value
*/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
    unsigned int i = 0;
    dlistint_t *temp = head;

    while (temp != NULL && i < index)
    {
        temp = temp->next;
        i++;
    }

    if (i == index)
        return (temp);

    return (NULL);
}