#include "main.h"
/**
* _isalpha - checks for alphabet
* @c: the character
* Return: 1 if alphabet
*/

int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
