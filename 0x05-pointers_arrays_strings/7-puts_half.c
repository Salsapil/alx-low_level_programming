#include "main.h"
/**
 * puts_half - function
 * @str: check input
 * Return: void
 */
void puts_half(char *str)
{
int full = 0;
int half = 0;
while (str[full] != '\0')
{
full++;
}
half = ((full / 2) + 1);
while (half <= full)
{
_putchar(str[half]);
half++;
}
}
