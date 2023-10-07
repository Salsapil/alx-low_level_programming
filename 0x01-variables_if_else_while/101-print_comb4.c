#include <stdio.h>
/**
 * main - entry point
 *
 * Description: C program
 *
 * Return: Always 0 (success)
*/
int main(void)
{
int i;
int l;
int j;
for (j = 0; j <= 7; j++)
{
for (i = j + 1; i <= 9; i++)
{
for (l = i + 1; l <= 9; l++)
{
putchar(j + '0');
putchar(i + '0');
putchar(l + '0');
if (i != 8 || l != 9 || j != 7)
{
putchar(',');
putchar(' ');
}
}
}
}
putchar('\n');
return (0);
}
