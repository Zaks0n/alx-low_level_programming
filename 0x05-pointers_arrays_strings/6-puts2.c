#include "main.h"

/**
 * puts2 - function thats prints every other letter.
 * @str: input
 * Return: Every other letter.
 */
void puts2(char *str)
{
	int i = 0;

	for (; str[i] != '\0'; i++)
	{
		if ((i % 2) == 0)
			_putchar(str[i]);
		else
			continue;
	}
	_putchar('\n');
}
