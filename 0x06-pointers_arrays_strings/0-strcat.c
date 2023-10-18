#include "main.h"
/**
 * _strcat - function
 * @dest: check input
 * @src: check input
 * Return: value
*/
char *_strcat(char *dest, char *src)
{
int i;
int j;
for (i = 0; dest[i] != '\0'; i++)
{
}
for (j = 0; src[j] != '\0'; j++)
{
dest[i] = src[j];
i++;
}
dest[i] = '\0';
return (dest);
}
