#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - function
 * @a: check input
 * @size: check input
 * Return: void
*/
void print_diagsums(int *a, int size)
{
int i, sum, sum1;
sum = 0;
sum1 = 0;
for (i = 0; i < size; i++)
{
sum += a[i];
sum1 += a[size - i - 1];
a += size;
}
printf("%d, ", sum);
printf("%d\n", sum1);
}
