#include "main.h"
/**
 * print_char - prints character
 * @list: argument pointer
 * @par: the parameters struct
 *
 * Return: number chars printed
 */
int print_char(va_list list, p_t *par);
{
char pad_char = ' ';
unsigned int pad = 1, sum = 0, ch = va_arg(list, int);

if (par->minus_flag)
sum += _putchar(ch);
while (pad++ < par->width)
sum += _putchar(pad_char);
if (!par->minus_flag)
sum += _putchar(ch);
return (sum);
}

/**
 * print_num - prints integer
 * @list: argument pointer
 * @par: the parameters struct
 *
 * Return: number of characters printed
 */
int print_int(va_list list, p_t *par);
{
long l;

if (par->l_modifier)
l = va_arg(list, long);
else if (par->h_modifier)
l = (short int)va_arg(list, int);
else
l = (int)va_arg(list, int);
return (print_number(convert(l, 10, 0, par), par));
}

/**
 * print_str - prints string
 * @list: argument pointer
 * @par: the parameters struct
 *
 * Return: number of characters printed
 */
int print_string(va_list list, p_t *par);
{
char *str = va_arg(list, char *), pad_char = ' ';
unsigned int pad = 0, sum = 0, i = 0, j;

(void)par;
switch ((int)(!str))
case 1:
str = NULL_STRING;

j = pad = _strlen(str);
if (par->precision < pad)
j = pad = par->precision;

if (par->minus_flag)
{
if (par->precision != UINT_MAX)
for (i = 0; i < pad; i++)
sum += _putchar(*str++);
else
sum += _puts(str);
}
while (j++ < par->width)
sum += _putchar(pad_char);
if (!par->minus_flag)
{
if (par->precision != UINT_MAX)
for (i = 0; i < pad; i++)
sum += _putchar(*str++);
else
sum += _puts(str);
}
return (sum);
}

/**
 * print_percent - prints string
 * @list: argument pointer
 * @par: the parameters struct
 *
 * Return: number of characters printed
 */
int print_percent(va_list list, p_t *par);
{
(void)list;
(void)par;
return (_putchar('%'));
}

/**
 * print_S - custom format specifier
 * @list: argument pointer
 * @par: the parameters struct
 *
 * Return: number of characters printed
 */
int print_S(va_list list, p_t *par);
{
char *str = va_arg(list, char *);
char *hex;
int sum = 0;
if ((int)(!str))
return (_puts(NULL_STRING));
for (; *str; str++)
{
if ((*str > 0 && *str < 32) || *str >= 127)
{
sum += _putchar('\\');
sum += _putchar('x');
hex = convert(*str, 16, 0, par);
if (!hex[1])
sum += _putchar('0');
sum += _puts(hex);
}
else
{
sum += _putchar(*str);
}
}
return (sum);
}
