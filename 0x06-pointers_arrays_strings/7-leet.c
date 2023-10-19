#include "main.h"
/**
 * leet - function
 * @s: check input
 * Return: value
 */
char *leet(char *s)
{
int i, j;
char letters[] = "AaEeLlOoTt";
char numbers[] = "4433110077";
for (i = 0; s[i] != '\0'; i++)
{
for (j = 0; j < 11; j++)
{
if (s[i] == letters[j])
{
s[i] = numbers[j];
}
}
}
return (s);
}
