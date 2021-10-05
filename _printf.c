#include "main.h"
/**
 * _printf - prints anything
 * @format: format
 * Return: number of characters printed
 */
int _printf(const char *format, ...)
{
const char *cr;
unsigned int j;
int i;
int m = 0;
va_list list;
char *s;

if (!format)
{
return (-1);
}
va_start(list, format);
for (cr = format; *cr != '\0'; cr++)
{
if (*cr != '%')
{
_putchar(*cr, &m);
continue;
}
cr++;
switch (*cr)
{
case 'c':
j = va_arg(list, int);
_putchar(j, &m);
break;
case 's':
s = va_arg(list, char *);
print_string(s, &m);
break;
case '%':
_putchar('%', &m);
break;
case 'd':
i = va_arg(list, int);
print_num(i, &m);
break;
case 'i':
i = va_arg(list, int);
print_num(i, &m);
break;
case 'r':
s = va_arg(list, char *);
reverse_str(s, &m);
break;
case 'b':
j = va_arg(list, int);
_printBinary(j, &m);
break;
case 'R':
s = va_arg(list, char *);
_rot13(s, &m);
break;
case '\0':
return (-1);
default:
_putchar('%', &m);
_putchar(*cr, &m);
}
}
va_end(list);
return (m);
}
