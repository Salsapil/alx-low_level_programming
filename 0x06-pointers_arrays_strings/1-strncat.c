#include "main.h"
/**
 * strncat - function
 * @dest: check input
 * @src: check input
 * @n: check input
 * Return: value
*/
char *_strncat(char *dest, char *src, int n)
{
int i;
int j;
int len;
len = 0;
for (i = 0; dest[i] != '\0'; i++)
{
len++;
}
for (j = 0; src[j] != '\0' && j < n; j++)
{
dest[len + j] = src[j];
}
dest[i + j] = '\0';
return (dest);
}
