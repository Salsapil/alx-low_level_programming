#include <stdio.h>
/**
 * main - function
 * @argc: check input
 * @argv: check input
 * Return: 0
*/
int main(int argc, char const *argv[])
{
int i;
i = 0;
while (argc--)
{
printf("%s\n", argv[i]);
i++;
}
return (0);
}
