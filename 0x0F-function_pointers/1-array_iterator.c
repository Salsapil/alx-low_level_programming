#include "function_pointers.h"
/**
 * array_iterator - function
 * @array: check input
 * @size: check input
 * @action: check input
 * Return: void
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
int *pointer = array + (size - 1);
if (array && size && action)
{
while (array <= pointer)
{
action(*array++);
}
}
}
