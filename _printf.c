#include "holberton.h"
#include <stdarg.h>
/**
 * _printf - _print
 * @format: format of input
 *
 * Return: length of printed char
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
if (format[a] == 's')
{
s = va_arg(all, char*);
b = 0;
while (s[b] != '\0')
{
_putchar(s[b]);
b++;
r = b;
}
}
else if (format[a] == 'c')
{
_putchar(va_arg(all, char*)[0]);
}
else if (format[a] == '\0')
return (-1);
else if (format[a] == '%')
_putchar(format[a - 1]);
}
else
{
_putchar(format[a]);
b++;
}
a++;
}
return (r);
}
