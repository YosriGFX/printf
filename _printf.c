#include <stdarg.h>
#include "holberton.h"
/**
* _printf - function to print anything
* @format: given argument
* Return: int
*/
int _printf(const char *format, ...)
{
unsigned int a = 0, b, r = 0;
char *s;
va_list all;
va_start(all, format);
while (format[a] != '\0')
{
if (format[a] == '%')
{
a++;
if (format[a] == 's' || format[a] == 'c')
{
s = va_arg(all, char*);
b = 0;
while (s[b] != '\0')
{
_putchar(s[b]);
r += b;
b++;
}
}
}
a++;
}
return (r);
}
