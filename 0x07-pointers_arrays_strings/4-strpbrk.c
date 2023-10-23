#include "main.h"
/**
 * _strpbrk - function
 * @s: 
 * @accept:
 * Return: value
*/
char *_strpbrk(char *s, char *accept)
{
int i;
int j;
char *p;
for (i = 0; s[i] != '\0'; i++)
{
for (j = 0; accept[j] != '\0'; j++)
{
if (accept[j] == s[i])
{
p = &s[i];
return (p);
}
}
}
return (0);
}
