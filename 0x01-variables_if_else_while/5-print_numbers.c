#include <stdio.h>
/**
 * main - Entry point C prog
 *
 * Description: C program with loop
 *
 * Return: Always 0 (Success)
*/
int main(void)
{
int num[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
int i;
for (i = 0; i <= 9; i++)
{
printf("%d", num[i]);
}
printf("\n");
return (0);
}
