#include "main.h"
/**
 * print_to_98 - function
 * Return: value
 * @n: check value
*/
void print_to_98(int n)
{
int x, y;
if (n >= 98)
{
for (x = n; x > 98; x--)
{
_putchar(x + '0');
}
}
else if (n <= 98)
{
for (y = n; y < 98; y++)
{
_putchar(y + '0');
}
}
else
{
_putchar(n + '0');
}
_putchar(',');
_putchar(' ');
}
