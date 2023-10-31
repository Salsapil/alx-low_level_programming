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
char *strconcat;
int i, j, len1, len2;
len1 = 0;
len2 = 0;
if (s1 == NULL)
s1 = "\0";
if (s2 == NULL)
s2 = "\0";
while (s1[len1])
len1++;
while (s2[len2])
len2++;
strconcat = malloc(sizeof(char) * (len1 + len2 + 1));
if (strconcat == NULL)
{
return (NULL);
}
for (i = 0; i < len1; i++)
{
strconcat[i] = s1[i];
}
for (j = 0; j < len2; j++)
{
strconcat[i + j] = s2[j];
}
strconcat[i + j] = '\0';
return (strconcat);
}
