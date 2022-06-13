#include "main.h"

/**
 * _strlen - a function to return length of String
 * @s: char
 * Retuen: length of input
 */

int _strlen(char *s)
{
	int count = 0;

	while (*(s + count) != '\0')
		count++;
	return (count);

}
