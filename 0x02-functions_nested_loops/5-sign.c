#include "main.h"
#include <stdio.h>
/**
 * print_sign - function
 * @n: check input
 * Return: 0 or 1
*/
int print_sign(int n)
{
if (n > 0)
{
_putchar(43);
return (1);
}
else if (n < 0)
{
_putchar(45);
return (-1);
}
else
{
_putchar(48);
return (0);
}
}