#include "main.h"
/**
 * cap_string - function
 * @str: check input
 * Return: value
*/
char *cap_string(char *str)
{
int i;

for (i = 0; str[i] != '\0'; i++)
{
if ((str[i] == 32 || str[i] == 46 || str[i] == 10 || str[i] == 9) && (str[i + 1] <= 122 && str[i + 1] >= 97))
{
str[i+1] = str[i+1] - 32;
}
if (str[i] == 9)
{
str[i] = 32;
}
}
str[i] = '\0';
return (str);
}
