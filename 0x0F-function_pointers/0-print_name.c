#include "function_pointers.h"
/**
 * print_name - function
 * @name: check input
 * @f: check input
 * Return: void
*/
void print_name(char *name, void (*f)(char *))
{
f(name);
}
