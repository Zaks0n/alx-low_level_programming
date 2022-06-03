#include <stdio.h>
/**
 *  main - prints alphabets without e and q.
 *
 *  Return: 0 when successful.
 */

int main(void)
{
	char alphabet;

	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
	{
		if (alphabet != 'q' && alphabet != 'e')
		{
			putchar(alphabet);
		}
	}
	putchar('\n');

	return (0);
}
