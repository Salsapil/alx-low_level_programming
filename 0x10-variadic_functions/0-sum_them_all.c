#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * sum_them_all - function
 * @n: check input
 * Return: value
*/
int sum_them_all(const unsigned int n, ...)
{
unsigned int sum, i;
va_list list;
sum = 0;
va_start(list, n);
if (n == 0)
{
return (0);
}
for (i = 0; i < n; i++)
{
sum += va_arg(list, unsigned int);
}
va_end(list);
return (sum);
}
