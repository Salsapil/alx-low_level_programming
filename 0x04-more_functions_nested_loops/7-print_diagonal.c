#include "main.h"
/**
 * print_diagonal - function
 *
 * @n: check input
 * Return: 0
 */
void print_diagonal(int n)
{
int i, k;

if (n <= 0)
{
_putchar('\n');
}
for (i = 1; i <= n; i++)
{
for (k = 1; k <= i; k++)
{
if (i == k)
{
_putchar('\\');
_putchar('\n');
}
else
{
_putchar(' ');
}
}
}
}
