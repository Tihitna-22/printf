#include"main.h"
/**
 * _print_number - prints a number
 * @n: The character to print
 * @k: counter through string
 * Return: nothing
 */
void _print_number(int n, int *k)
{
int x;
if (n == 0)
{
_putchar((n + '0'), k);
}
else if (n < 0)
{
_putchar(('-'), k);
for (x = 1000000000; x > 0; x = x / 10)
{
if (n / x != 0)
{
if (n < -214783648)
_putchar(((((-n / x) % 10) * -1) + '0'), k);
else
_putchar((((-n / x) % 10) + '0'), k);
}
}
}
else
{
for (x = 1000000000; x > 0; x = x / 10)
{
if (n / x != 0)
{
_putchar(((n / x) % 10 + '0'), k);
}
}
}
}
