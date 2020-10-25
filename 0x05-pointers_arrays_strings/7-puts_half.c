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
int i = 0, lenght, start;
while (str[i] != 0)
i++;
lenght = i;
if (lenght % 2 == 0)
start = lenght / 2;
else
start = ((lenght - 1) / 2) + 1;
for (i = start; i < lenght; i++)
_putchar(str[i]);
_putchar(10);
}
