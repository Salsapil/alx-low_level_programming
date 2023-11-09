#include "variadic_functions.h"
#include <stdarg.h>
#include <stddef.h>
#include <stdio.h>
/**
 * print_strings - function
 * @separator: check input
 * @n: check input
 * Return: void
*/
void print_strings(const char *separator, const unsigned int n, ...)
{
unsigned int i;
char *string;
va_list list;
va_start(list, n);
for (i = 0; i < n; i++)
{
string = va_arg(list, char*);
printf("%s", string);
if (separator != NULL && i < (n - 1))
{
printf("%s", separator);
}
if (string == NULL)
{
printf("nil");
}
}
printf("\n");
va_end(list);
}
