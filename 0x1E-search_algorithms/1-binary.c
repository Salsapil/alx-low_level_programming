#include "search_algos.h"
/**
 * print_array - help function
 * @array: pointer to the first element of the array to search in
 * @high: number of elements in array
 * @low: first element
 * Return: void
 */
void print_array(int *array, int high, int low)
{
int i;

for (i = high; i <= low; i++)
{
printf("%d", array[i]);
if (i < low)
printf(", ");
}
printf("\n");
}

/**
 * binary_search - function
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 * Return: value or -1
 */
int binary_search(int *array, size_t size, int value)
{
int low = 0, high = size - 1, mid;

if (!array || size == 0)
return (-1);

while (low <= high)
{
printf("Searching in array: ");
print_array(array, low, high);
mid = low + (high - low) / 2;

if (array[mid] > value)
high = mid - 1;
else if (array[mid] < value)
low = mid + 1;
else
return (mid);
}
return (-1);
}
