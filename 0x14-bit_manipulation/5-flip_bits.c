#include "main.h"
/**
 * flip_bits - function
 * @n: input
 * @m: input
 * Return: value
*/
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
unsigned long int different_bits;
unsigned int count;
count = 0;

different_bits = n ^ m;
while (different_bits)
{
count += different_bits & 1;
different_bits = different_bits >> 1;
}
return (count);
}
