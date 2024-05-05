#include "search_algos.h"
/**
 * linear_search - Entry point
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 * Return: value or -1
 */

int linear_search(int *array, size_t size, int value)
{
size_t i = 0;
if (!array || size == 0)
{
return (-1);
}
for (i; i < size; i++)
{
printf("Value checked array[%ld] = [%d]\n", i, array[i]);
if (array[i] == value)
{
return (i);
}
}
return (-1);
}
