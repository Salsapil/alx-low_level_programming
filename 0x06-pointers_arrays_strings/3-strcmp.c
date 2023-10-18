#include "main.h"
/**
 * _strcmp - function
 * @s1: check input
 * @s2: check input
 * Return: value
*/
int _strcmp(char *s1, char *s2)
{
int i;
for (i = 0; s1[i] == s2[i]; i++)
{
if (s1[i] != '\0')
{
return (0);
}
}
return (s1[i] - s2[i]);
}
