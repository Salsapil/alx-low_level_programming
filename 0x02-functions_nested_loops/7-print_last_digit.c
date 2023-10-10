#include "main.h"
/**
 * print_last_digit - function
 * @n: check input
 * Return: last digit
*/
int print_last_digit(int n)
{
int ld;
if (n < 0)
{
ld = (-1) * (n % 10);
}
else
{
ld = n % 10;
}
_putchar('0' + ld);
_putchar('\n');
return (ld);
}
