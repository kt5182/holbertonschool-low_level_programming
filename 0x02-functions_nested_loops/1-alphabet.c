#include "holberton.h"
/**
* print_alphabet - Print alphabet in lowercase using only `_putchar`
* Return: 0
**/
void print_alphabet(void)
{
int i;
i = 0;
while (i < 26)
{
_putchar('a' + i);
i++;
}
_putchar('\n');
}