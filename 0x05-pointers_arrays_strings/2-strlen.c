#include "main.h"
/**
 * _strlen - function
 * @s: check input
 * Return: value
*/
int _strlen(char *s)
{
int i;
int len = 0;
for (i = 0; s[i] != '\0'; i++)
{
len++;
}
return (len);
}
