#include <stdio.h>
/**
 * main - entry point
 *
 * Description: C program
 *
 * Return: Always 0 success
*/
int main(void)
{
int i;
int l;
for (i = 0; i <= 9; i++)
{
for (l = i + 1; l <= 9; l++)
{
putchar(i + '0');
putchar(l + '0');
if (i != 8 || l != 9)
{
putchar(',');
putchar(' ');
}
else
{
putchar(' ');
}
}
}
return (0);
}
