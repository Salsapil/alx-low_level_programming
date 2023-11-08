#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
/**
 * get_op_func - function
 * @s: check input
 * Return: value
*/
int (*get_op_func(char *s))(int, int)
{

op_t ops[] = {
{"+", op_add},
{"-", op_sub},
{"*", op_mul},
{"/", op_div},
{"%", op_mod},
{NULL, NULL}
};
int i;
for (i = 0; ops[i].op; i++)
{
if (*(ops[i].op) == *s)
{
return (ops[i].f);
}
}
printf("Error\n");
exit(99);
}
