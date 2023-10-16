#include "main.h"
/**
 * print_rev - function
 * @s: check input
 * Return: void
*/
void print_rev(char *s)
{
int i;
int len = 0;
for (i = 0; s[i] != '\0'; i++)
{
len++;
}
while (len >= 0)
{
_putchar(s[len]);
len--;
}
}
