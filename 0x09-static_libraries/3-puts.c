#include "main.h"
/**
 * _puts - function
 * @str: check input
 * Return: void
*/
void _puts(char *str)
{
int i;
for (i = 0; str[i]; i++)
{
_putchar(str[i]);
}
_putchar('\n');
}
