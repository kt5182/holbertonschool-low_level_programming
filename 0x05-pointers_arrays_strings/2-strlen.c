#include "holberton.h"
/**
* _puts - print a string to stdout
* @str: char array string type
* Description: Can only use _putchar
**/
int _strlen(char *i)
{
int count;
count = 0;
while (*i != 0)
{
count++;
i++;
}
return (count);
}
