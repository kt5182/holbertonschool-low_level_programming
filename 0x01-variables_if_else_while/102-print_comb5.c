#include <stdio.h>
/**
* main - main block
* Description: Print all possible different combinations of 3 digits.
* Numbers must be separated by commas and a space.
* The 3 digits must be different.
* 012, 120, 102, 021, 201, 210 are considered the same combination.
* print only the smallest combination of 3 digits.
* Numbers should be printed in ascending order.
* You can only use `putchar` to print to console.
* You can only use `putchar` up to 6 times.
* You are not allowed to use any variables of type `char`.
* Return: 0
**/
int main(void)
{
int i, j;
for (i = 0; i < 100; i++)
{
for (j = i + 1; j < 100; j++)
{
putchar(i / 10 + '0');
putchar(i % 10 + '0');
putchar(32);
putchar(j / 10 + '0');
putchar(j % 10 + '0');
if (i == 98 && j == 99)
continue;
else
putchar(44);
putchar(32);
}
}
putchar(10);
return (0);
}
