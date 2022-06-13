#include "main.h"

/**
 * _puts - a function that prints a string.
 * @str: String
 * Return: string
 */

void _puts(char *str)
{
	int i;
	
	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
