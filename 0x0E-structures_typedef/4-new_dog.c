#include "dog.h"
#include <stdlib.h>
/***/
int lenght(const char *str)
{
    int len;
    int i;
    len = 0;
    for (i = 0; str[i] != '\0'; i++)
    {
        len++;
    }
    return (len);
}
char *copy(char *dest, char *str)
{
    int i;
    for (i = 0; str[i]; i++)
    {
        dest[i] = str[i];
    }
    dest[i] = '\0';
    return (dest);
}
dog_t *new_dog(char *name, float age, char *owner)
{
    dog_t *m;
    if (age < 0 || !name || !owner)
    {
        return (NULL);
    }
    m = malloc(sizeof(dog_t));
    if (m == NULL)
    {
        return (NULL);
    }
    m->name = malloc(sizeof(char) * lenght(name) + 1);
    if (m->name == NULL)
    {
        free(m);
        return (NULL);
    }
    m->owner = malloc(sizeof(char) * lenght(name) + 1);
    if (m->owner == NULL)
    {
        free(m->name);
        free(m);
        return (NULL);
    }
    m->name = copy(m->name, name);
    m->age = age;
    m->owner = copy(m->owner, owner);
    return (m);
}
