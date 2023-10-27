#include "main.h"
/**
 * _strstr - function
 * @haystack: check input
 * @needle: check input
 * Return: value
 */
char *_strstr(char *haystack, char *needle)
{
int i, j, k;

for (i = 0; haystack[i] != '\0'; i++)
{
for (k = 0, j = i ; needle[k] != '\0'; j++, k++)
{
if (haystack[j] != needle[k] || haystack[j] == '\0')
break;
}
if (needle[k] == '\0')
return (haystack + i);
}
return (0);
}
