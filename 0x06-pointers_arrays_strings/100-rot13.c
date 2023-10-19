#include "main.h"
/**
 * rot13 - function
 * @s: check input
 * Return: value
 */
char *rot13(char *s)
{
int i, j;
char fisrt[] = "AaBbCcDdEeFfGgHhIiJjKkLlMm";
char second[] = "NnOoPpQqRrSsTtUuVvWwXxYyZz";
for (i = 0; s[i] != '\0'; i++)
{
for (j = 0; j < 26; j++)
{
if (s[i] == fisrt[j])
{
s[i] = second[j];
}
else if (s[i] == second[j])
{
s[i] = fisrt[j];
}
}
}
return (s);
}
