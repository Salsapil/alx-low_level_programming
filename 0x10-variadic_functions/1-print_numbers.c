#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_numbers - function
 * @separator: check input
 * @n: check input
 * Return: void
*/
void print_numbers(const char *separator, const unsigned int n, ...)
{
unsigned int i;
va_list list;
va_start(list, n);
for (i = 0; i < n; i++)
{
printf("%d", va_arg(list, unsigned int));
if (separator != NULL && i < (n - 1))
{
printf("%s", separator);
}
}
printf("\n");
va_end(list);
}
