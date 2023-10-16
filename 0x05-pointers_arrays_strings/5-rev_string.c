#include "main.h"
/**
 * rev_string - function
 * @s: check input
 * Return: void
*/
void rev_string(char *s)
{
int len;
int lenn;
int i;
char tem;
len = 0;
lenn = 0;
while (s[len] != '\0')
{
len++;
}
len--;
i = 0;
lenn = len;
while (lenn > 0)
{
tem = s[lenn];
s[lenn] = s[i];
s[i] = tem;
lenn--;
i++;
}
}
