#include "main.h"
/**
 * swap_int - function to swap
 *
 * @a: check input
 * @b: check input
 * 
 * Return: avoid
 */
void swap_int(int *a, int *b)
{
int x = *a;
int y = *b;

if (*a != *b)
{
*a = y;
*b = x;
}
}
