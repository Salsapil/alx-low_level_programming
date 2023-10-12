#include "main.h"
/**
 * more_numbers - function
 * Return: 0
 */
void more_numbers(void)
{
int i, k;

for (k = 0; k < 10; k++)
{
for (i = 0; i <= 14; i++)
{
if (i >= 10)
{
_putchar(i / 10 + '0');
_putchar(i % 10 + '0');
}
else
{
_putchar(i + '0');
}
}
_putchar('\n');
}
}
