#include "main.h"
/**
 * _sqrt_recursion_two - function
 * @i: check input
 * @num: check input
 * Return: value
*/
int _sqrt_recursion_two(int i, int num)
{
if (i * i == num)
{
return (i);
}
else
{
if (i * i > num)
{
return (-1);
}
return (_sqrt_recursion_two(i + 1, num));
}
}
/**
 * _sqrt_recursion - function
 * @n: check input
 * Return: value
*/
int _sqrt_recursion(int n)
{
if (n < 0)
{
return (-1);
}
return (_sqrt_recursion_two(0, n));
}
