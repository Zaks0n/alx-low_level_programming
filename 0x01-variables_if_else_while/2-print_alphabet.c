#include <stdio.h>

/**
 *  main - prints lower case alphabets
 *  Return: Always returns 0
 *
 */

int main(void)
{
	char alphabet;

	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
		putchar(alphabet);
	putchar('\n');

	return (0);
}
