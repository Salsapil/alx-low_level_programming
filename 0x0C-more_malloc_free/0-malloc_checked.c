#include "main.h"
#include <stdlib.h>
/**
 * malloc_checked - function
 * @b: check input
 * Return: void
 */
void *malloc_checked(unsigned int b)
{
int *m = malloc(b);
if (m == 0)
{
exit(98);
}
return (m);
}
