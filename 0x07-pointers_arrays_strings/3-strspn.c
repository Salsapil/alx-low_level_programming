#include "main.h"
/**
 * _strspn - function
 * @s: check input
 * @accept: check input
 * Return: value
*/
unsigned int _strspn(char *s, char *accept)
{
int i;
int j;
int count;
count = 0;
for (i = 0; s[i] != '\0'; i++)
{
for (j = 0; accept[j] != '\0'; j++)
{
if (s[i] == accept[i])
{
count++;
break;
}
if (accept[j] == '\0')
break;
}
}
return (count);
}
