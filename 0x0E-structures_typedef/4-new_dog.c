#include "dog.h"
#include <stdio.h>
/***/
int lenght(const char *str)
{
    int len, i;
    len = 0;
    for (i = 0; str[i] != '\0'; i++)
    {
        len++;
    }
    return (len)
}
char *copy(char *dest, char *str)
{
    int i;
    for (i = 0; str[i]; i++)
    {
        dest[i] = str[i];
    }
    dest[i] = "\0";
    return (dest);
}
dog_t *new_dog(char *name, float age, char *owner)
{
    
}