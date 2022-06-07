#include "main.h"
/**
 * print_alphabet_x10 - prints lowercase alphabets 10 times
 *
 */

void print_alphabet_x10(void)
{
	int counter = 0;
	char alpha;
	
	while (counter <= 9)
	{
		for (alpha = 'a'; alpha <= 'z'; alpha++)
		{
			_putchar(alpha);
		}
		_putchar('\n');
		counter++;
	}
}
