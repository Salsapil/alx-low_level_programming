#include "main.h"
/**
 * cap_string - function
 * @str: check input
 * Return: value
 */
char *cap_string(char *str)
{
int i, j;
char sep[] = " \t\n,;.!?\"(){}";
for (i = 0; str[i] != '\0'; i++)
{
for (j = 0; sep[j] != '\0'; j++)
{
if ((str[i] == sep[j]) && (str[i + 1] <= 122 && str[i + 1] >= 97))
{
str[i + 1] = str[i + 1] - 32;
}
}
}
str[i] = '\0';
return (str);
}
