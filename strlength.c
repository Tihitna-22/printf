#include "main.h"
/**
 * strlength - calculate length of a string
 *@s: char pointer
 * Return: length
 */

int strlength(char *s)
{
char *cp = s;
int l = 0;

while (*cp != '\0')
{
l++;
cp++;
}
return (l);
}
