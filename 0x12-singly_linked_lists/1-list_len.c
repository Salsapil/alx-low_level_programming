#include "lists.h"
/***/
size_t list_len(const list_t *h)
{
int i;
i = 0;
while (h != NULL)
{
    h = h->next;
    i++;
}
return (i);
}