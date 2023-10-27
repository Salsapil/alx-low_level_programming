#include <stdio.h>
/**
 * main - function
 * @argc: check input
 * @argv: check input
 * Return: value
*/
int main(int argc, char const *argv[])
{
int sum;
if (argc == 3)
{
sum = atoi(argv[1]) * atoi(argv[2]);
printf("%d\n", sum);
}
else
{
printf("Error\n");
return (1);
}
}
