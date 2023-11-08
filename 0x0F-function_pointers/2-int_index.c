#include "function_pointers.h"
/**
 * int_index - function
 * @array: check input
 * @size: check input
 * @cmp: check input
 * Return: -1
*/
int int_index(int *array, int size, int (*cmp)(int))
{
int i;
if (array && size && cmp)
{
for (i = 0; i < size; i++)
{
if (cmp(array[i]))
{
return (i);
}
}
}
return (-1);
}
