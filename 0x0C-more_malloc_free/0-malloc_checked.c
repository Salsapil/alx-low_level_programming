#include "main.h"
/**
 * malloc_checked - function
 * @b: check input
 * Return: void
*/
void *malloc_checked(unsigned int b)
{
int *m;
m = malloc(b);
if (m == 0)
{
exit(98);
}
else
{
return (m);
}
}
