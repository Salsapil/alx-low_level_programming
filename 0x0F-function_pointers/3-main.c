#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - function
 * @argc: check input
 * @argv: check input
 * Return: 0
 */
int main(int argc, char **argv)
{
int (*f)(int, int);
int i, x, y;
char *s;
if (argc != 4)
{
printf("Error\n");
exit(98);
}
x = atoi(argv[1]);
y = atoi(argv[3]);
s = argv[2];
if (!x && !y)
{
printf("Error\n");
exit(98);
}
f = get_op_func(s);
if (!(f))
{
printf("Error\n");
exit(99);
}
i = f(x, y);
printf("%d\n", i);
return (0);
}
