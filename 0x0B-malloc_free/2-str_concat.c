#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * str_concat - function
 * @s1: check input
 * @s2: check input
 * Return: value
*/
char *str_concat(char *s1, char *s2)
{
    char *m;
    int i, j, k;
    int size1, size2;
    int len;
    len = 0;
    size1 = 0;
    size2 = 0;
    if (s1 == NULL)
    {
        s1 = "\0";
    }
    if (s2 == NULL)
    {
        s2 = "\0";
    }
    for (i = 0; i < s1[i]; i++)
    {
        size1++;
    }
    for (j = 0; j < s2[j]; j++)
    {
        size2++;
    }
    len = size1 + size2;
    m = malloc((len) * sizeof(char) + 1);
    if (m == 0)
    {
        return (0);
    }
    for (k = 0; k < len; k++)
    {
        if (k < size1)
        {
            m[k] = s1[k];
        }
        else
            m[k] = s2[k - size2];
    }
    m[k] = '\0';
    return (m);
}