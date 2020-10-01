#include "holberton.h"
#include <stdio.h>
/**
* print_array - print `n` elements of an array of integers
* @a: int type array pointer
* @n: int type integer
* Description: Numbers must be separated by comma and space.
* Numbers should be displayed in the same order they are stored in array.
* You can only use _putchar to print.
**/
void puts_half(char *str)
{
int i, pos;
i = 0;
while ((*(str + i)) != 0)
++i;
if (i % 2 != 0)
pos = (i / 2) + 1;
else
pos = i / 2;
while ((*(str + pos)) != 0)
{
_putchar((*(str + pos)));
pos++;
}
_putchar(10);
}
