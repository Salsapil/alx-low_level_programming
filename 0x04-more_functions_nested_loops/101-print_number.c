#include "main.h"
/**
 * print_number - function
 * @n: check input
*/
void print_number(int n)
{
int i = 1;
unsigned int num;

if (n < 0)
{
_putchar('-');
num = -n;
}
else
num = n;
while (num / i > 9)
i *= 10;
while (i > 0)
{
_putchar((num / i) % 10 + '0');
i /= 10;
}
}
