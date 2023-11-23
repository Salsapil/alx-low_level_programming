#include "main.h"
/**
 * set_bit - function
 * @n: input
 * @index: input
 * Return: value
*/
int set_bit(unsigned long int *n, unsigned int index)
{
unsigned long int shift_index;
shift_index = 0;

if (index >= sizeof(unsigned long int) * 8)
{
return (-1);
}
shift_index = *n >> index;
*n = shift_index | 1;
*n = *n << index;
return (1);
}
