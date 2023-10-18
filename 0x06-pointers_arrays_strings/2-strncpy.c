#include "main.h"
/**
 * _strncpy - function
 * @dest: check input
 * @src: check input
 * @n: check input
 * Return: value
*/
char *_strncpy(char *dest, char *src, int n)
{
int i;
for (i = 0; src[i] != '\0' && i < n; i++)
{
dest[i] = src[i];
}
for (; i < n; i++)
{
dest[i] = '\0';
}
return (dest);
}
