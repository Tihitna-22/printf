#include"main.h"
#include <unistd.h>
/**
 * _putchar - writes the character c to stdout
 * @c: The character to be printed
 * @k: counter through string
 * Return: One or -1 if it is error
 */
int _putchar(char c, int *k)
{
	*k += 1;
	return (write(1, &c, 1));
}
