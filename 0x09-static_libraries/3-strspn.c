#include "main.h"
/**
 * _strspn - function
 * @s: check input
 * @accept: check input
 * Return: value
*/
unsigned int _strspn(char *s, char *accept)
{
unsigned int i;
unsigned int j;
for (i = 0; s[i] != '\0'; i++)
{
for (j = 0; accept[j] != s[i]; j++)
{
if (accept[j] == '\0')
return (i);
}
}
return (i);
}
