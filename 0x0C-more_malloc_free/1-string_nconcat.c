#include "main.h"
#include <stdlib.h>
/**
 * string_nconcat - function
 * @s1: check input
 * @s2: check input
 * @n: check input
 * Return: value
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
unsigned int i, j, x, y;
char *m;
if (s1 == NULL)
{
s1 = "";
}
if (s2 == NULL)
{
s2 = "";
}
for (i = 0; s1[i] != '\0'; i++)
{
}
for (j = 0; s2[j] != '\0'; j++)
{
}
m = malloc(i + n + 1);
if (m == NULL)
{
return (NULL);
}

for (x = 0; s1[x] != '\0'; x++)
{
m[x] = s1[x];
}
for (y = 0; y < n ; y++)
{
m[x] = s2[y];
x++;
}
m[x] = '\0';
return (m);
}
