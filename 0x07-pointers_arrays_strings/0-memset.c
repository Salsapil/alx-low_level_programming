#include "main.h"
/**
 * _memset - function
 * @s: check input
 * @b: check input
 * @n: check input
 * Return: value
*/
char *_memset(char *s, char b, unsigned int n)
{
int i;
for (i = 0; n > 0; i++)
{
s[i] = b;
n--;
}
return (s);
}
