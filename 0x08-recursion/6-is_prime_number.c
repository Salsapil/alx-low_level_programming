#include "main.h"
/**
 * is_prime_two - function
 * @n: check input
 * @i: check input
 * Return: values
*/
int is_prime_two(int n, int i)
{
if (i == n)
{
return (1);
}
if (n % i == 0)
{
return (0);
}
return (is_prime_two(n, i + 1));
}
/**
 * is_prime_number - function
 * @n: check input
 * Return: value
*/
int is_prime_number(int n)
{
if (n <= 1)
{
return (0);
}
return (is_prime_two(n, 2));
}
