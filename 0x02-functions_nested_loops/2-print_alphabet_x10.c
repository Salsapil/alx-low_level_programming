#include "main.h"
/**
 * print_alphabet_x10 - Entry function
*/
void print_alphabet_x10(void)
{
char let;
int n;
for (n = 0; n < 10; n++)
{
for (let = 97; let <= 122; let++)
{
_putchar(let);
}
_putchar('\n');
}
}
