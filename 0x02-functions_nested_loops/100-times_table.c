#include "holberton.h"
/**
* print_times_table - Print the `n` times table, starting with 0.
* Description: If `n` is greater than 15 or less than 0, print nothing.
* @n: int type number
**/
void print_times_table(int n)
{
int n1, n2, segnum, resul;  
if (n > 15 || n < 0)
return;
for (n1 = 0; n1 <= n; n1++)
{
_putchar('0');
for (n2 = 1; n2 <= n; n2++)
{
resul = n1 * n2;
_putchar(',');
_putchar(' ');
if (resul <= 9)
{
_putchar(' ');
_putchar(' ');
_putchar(resul + '0');
}
else if (resul <= 99)
{
_putchar(' ');
_putchar(resul / 10 + '0');
_putchar(resul % 10 + '0');
}
else
{
segnum = ((resul / 10) % 10);
_putchar(resul / 100 + '0');
_putchar(segnum + '0');
_putchar(resul % 10 + '0');
}
}
_putchar('\n');
}
}
