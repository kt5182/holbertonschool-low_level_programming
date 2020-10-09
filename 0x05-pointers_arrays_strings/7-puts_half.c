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
int j, i = 0;
while (*(str + i))
i++;
j = i / 2;
if (i % 2)
j += 1;
while (j < i)
{
_putchar(*(str + j));
j++;
}
_putchar('\n');
}
