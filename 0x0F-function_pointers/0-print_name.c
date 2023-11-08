#include "function_pointers.h"
#include <stddef.h>
/**
 * print_name - function
 * @name: check input
 * @f: check input
 * Return: void
*/
void print_name(char *name, void (*f)(char *))
{
if (name != NULL && f != NULL)
f(name);
}
