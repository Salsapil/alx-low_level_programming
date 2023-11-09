#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
#include <stddef.h>
/***/
void format_char(char *separator, va_list list)
{
printf("%s%c", separator, va_arg(list, int));
}
/***/
void format_int(char *separator, va_list list)
{
printf("%s%d", separator, va_arg(list, int));
}
/***/
void format_float(char *separator, va_list list)
{
printf("%s%f", separator, va_arg(list, double));
}
/***/
void format_string(char *separator, va_list list)
{
char *str;
str = va_arg(list, char *);
if (!str)
{
printf("(nil)");
}
printf("%s%s", separator, str);
}
/***/
void print_all(const char * const format, ...)
{
int i = 0, j;
va_list list;
char *separator = "";

dt_type dts[] = {
{"c", format_char},
{"i", format_int},
{"f", format_float},
{"s", format_string},
{NULL, NULL}};

va_start(list, format);
while (format && format[i])
{
j = 0;
while (dts[j].dt)
{
if (format[i] == dts[j].dt[0])
{
dts[j].f(separator, list);
separator = ", ";
}
j++;
}
i++;
}
printf("\n");
va_end(list);
}
