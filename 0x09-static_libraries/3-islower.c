#include "main.h"
/**
 * _islower - function
 * @c: check input
 * Return: 0 (Success) otherwise 1 (failed)
*/
int _islower(int c)
{
if (c <= 122 && c >= 97)
{
return (1);
}
else
return (0);
}
