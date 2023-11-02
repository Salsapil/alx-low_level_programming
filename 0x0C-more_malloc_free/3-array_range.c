#include "main.h"
#include <stdlib.h>
/**
 * array_range - function
 * @min:
 * @max:
 * Return: value
*/
int *array_range(int min, int max)
{
int len, i;
int *m;
len = 0;
if (min > max)
{
return (NULL);
}
len = (max - min) + 1;
m = malloc(sizeof(int) * len);
if (m == 0)
{
return (NULL);
}
for (i = 0; i < len; i++)
{
m[i] = min++;
}
return (m);
}
