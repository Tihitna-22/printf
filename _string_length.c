#include "main.h"

/**
 * _strlen - Returns the length of a string
 *
 * @s: The string to get the length of
 * Return: Length of string
 */
int _strlen(char *s)
{
	/* s = "Hello"; */
	int arrayIndex;

	arrayIndex = 0;
	/* while the character we're looking at isn't null */
	while (s[arrayIndex] != '\0')
	{
		/* add one more to the count and continue looking */
		arrayIndex++;
	}

	return (arrayIndex);
}
