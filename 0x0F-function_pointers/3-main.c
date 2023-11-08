#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - function
 * @argc: check input
 * @argv: check input
 * Return: 0
*/
int main(int argc, char *argv[])
{
if (argc != 4)
{
printf("Error\n");
return (98);
}

int num1 = atoi(argv[1]);
char *operator = argv[2];
int num2 = atoi(argv[3]);

int (*func)(int, int) = get_op_func(operator);
int result = func(num1, num2);

printf("%d\n", result);
return (0);
}
