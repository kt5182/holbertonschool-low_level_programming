#include "holberton.h"
/**
* print_square - print a square
* @size: size of square
* Description: Can only use _putchar to print. Use '#' to print square.
**/
void print_square(int size)
{
int i, j;
for (j = 1; j <= size; j++)
{
for (i = 1; i <= size; i++)
{
_putchar('#');
}
if (size > 1)
_putchar('\n');
}
if (size <= 0)
_putchar('\n');
}
