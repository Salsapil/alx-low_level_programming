#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _strdup - function
 * @str: check input
 * Return: value
*/
char *_strdup(char *str)
{
int i, j;
char *copy;
if (str == NULL)
{
return (NULL);
}
for (i = 0; str[i] != '\0'; i++)
{
}
copy = malloc(i * sizeof(*str));
if (copy == 0)
{
return (NULL);
}
else 
{
for (j = 0; j <= i; j++)
{
copy[j] = str[j];
}
}
return (copy);
}
