#include "main.h"
/**
 * get_bit - function
 * @n: input
 * @index: input
 * Return: value
*/
int get_bit(unsigned long int n, unsigned int index)
{
unsigned long int shift_index, bit_value;
shift_index = 0;
bit_value = 0;

if (index >= sizeof(unsigned long int) * 8)
{
return (-1);
}
shift_index = n >> index;
bit_value = shift_index & 1;
return (bit_value);
}
