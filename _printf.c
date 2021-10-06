#include "main.h"
/**
 * _printf - prints anything
 * @format: format
 * Return: number of characters printed
 */
int _printf(const char *format, ...)
{
int sum = 0;
va_list list;
char *s, *cr;
p_t par = PARAMS_INIT;
va_start(list, format);
if (!format || (format[0] == '%' && !format[1]))
return (-1);
if (format[0] == '%' && format[1] == ' ' && !format[2])
return (-1);
for (s = (char *)format; *s; s++)
{
init_params(&par, list);
if (*s != '%')
{
sum += _putchar(*s);
continue;
}
cr = s;
s++;
while (get_flag(s, &par))
s++;
}
s = get_width(s, &par, list);
s = get_precision(s, &par, list);
if (get_modifier(s, &par))
s++;
if (!get_specifier(s))
sum += print_from_to(cr, s,
par.l_modifier || par.h_modifier ? s - 1 : 0);
else
sum += get_print_func(s, list, &par);
}
_putchar(BUF_FLUSH);
va_end(list);
return (sum);
}
