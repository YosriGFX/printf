#include "holberton.h"
#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
/**
* getspecifier - function for the specifier
* @x: char
* Return: pointer to function
*/
int(*getspecifier(char x))(va_list)
{
int i;
fondation p[] = {
{'c', print_c},
{'s', print_s},
{'\0', '\0'}
};
for (i = 0; p[i].letter; i++)
{
if (p[i].letter == x)
{
return (p[i].func);
}
}
return (0);
}
