#include "main.h"
/**
 * _memcpy - function
 * @dest: check input
 * @src: check input
 * @n: check input
 * Return: value
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned i;
for (i = 0; i < n; i++)
{
dest[i] = src[i];
}
return (dest);
}
