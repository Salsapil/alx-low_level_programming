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
}
return (s1[i] - s2[i]);
}
