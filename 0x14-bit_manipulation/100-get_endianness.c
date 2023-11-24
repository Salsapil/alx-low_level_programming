#include "main.h"
/**
 * get_endianness - function
 * Return: value
*/
int get_endianness(void)
{
unsigned int i;
char *c;
i = 1;
c = (char *)&i;

if (*c)
{
return (1);
}
else
{
return (0);
}
}
