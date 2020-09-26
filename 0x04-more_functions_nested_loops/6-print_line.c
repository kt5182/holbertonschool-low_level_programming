#include "holberton.h"
/**
* print_line - draw a straight line
* @n: number of times underscore is printed
* Description: Can only use _putchar to print
**/
void print_line(int n)
{
int i;
for (i = 1; i <= n; ++i)
_putchar('_');
if (n <= 0)
_putchar('\n');
else
_putchar('\n');
}
