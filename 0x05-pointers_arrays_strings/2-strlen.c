#include "holberton.h"
/**
* _puts - print a string to stdout
* @str: char array string type
* Description: Can only use _putchar
**/
int _strlen(char *s)
{
int i;
while (*s != '\0')
{
i++;
s++;
}
return (i);
}
