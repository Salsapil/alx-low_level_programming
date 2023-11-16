#include "lists.h"
#include <stdio.h>
#include <stddef.h>
/***/
int _strlen(char *s)
{
    int i;
    i = 0;
    if (s == NULL)
    {
        return (0);
    }
    else
    {
        while (s[i] != '\0')
        {
            i++;
        }
        
    }
    return (i);
}
size_t print_list(const list_t *h)
{
int i;
i = 0;
while (h != NULL)
{
    if (!_strlen(h->str))
    {
        printf("[%d] %s\n", _strlen(h->str), "(nil)");
    }
    else
    {
        printf("[%d] %s\n", _strlen(h->str), h->str);

    }
    h = h->next;
    i++;
}
return (i);
}