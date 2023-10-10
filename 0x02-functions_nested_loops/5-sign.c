#include "main.h"
/**
 * print_sign - function
 * @n: check input
 * Return: 0 or 1
*/
int print_sign(int n)
{
int plus = 43;
int zero = 48;
int dash = 45;
if (n > 0)
{
return (1);
_putchar(plus);
}
else if (n < 0)
{
return (-1);
_putchar(dash);
}
else
{
return (0);
_putchar(zero);
}
}
