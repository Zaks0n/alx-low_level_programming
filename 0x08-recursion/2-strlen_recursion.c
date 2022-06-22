#include "main.h"

/**
 * _strlenght_recursion - returns the lenght of a string
 * @s: String to check its lenght.
 * Return: lenght of string.
 */

int _strlenght_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlenght_recursion(s + 1));
}
