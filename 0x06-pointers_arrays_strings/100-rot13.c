#include "main.h"
/**
 * rot13 - function
 * @s: check input
 * Return: value
*/
char *rot13(char *s)
{
int i, j;
char first[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
char second[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
for (i = 0; s[i] != '\0'; i++)
{
for (j = 0; first[j] != '\0' && s[i] != first[j]; j++)
{
}
if (first[j] != '\0')
{
s[i] = second[j];
}
}
return (s);
}
