#include "main.h"
/**
 * puts2 - function
 * @str: check input
 * Return: void
*/
void puts2(char *str)
{
int i;
for (i = 0; str[i] != '\0'; i++)
{
if (str[i] % 2 == 0)
{
_putchar(str[i]);
}
else
{
continue;
}
}
_putchar('\n');
}
