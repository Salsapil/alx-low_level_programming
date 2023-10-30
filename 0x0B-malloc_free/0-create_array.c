#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * create_array - Create a array object
 * @size: check input
 * @c: check input
 * Return: value
*/
char *create_array(unsigned int size, char c)
{
char *array = malloc(size);
unsigned int i;
if (size == 0 || array == 0)
{
return (NULL);
}
for (i = 0; i < size; i++)
{
array[i] = c;
}
return (array);
}
