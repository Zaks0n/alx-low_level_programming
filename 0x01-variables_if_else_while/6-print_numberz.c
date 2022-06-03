#include <stdio.h>
/**
 *  main - prints number 1-9.
 *
 *  Return: 0 always.
 */

int main(void)
{
	int num;

	for (num = '0'; num <= '9'; num++)
		putchar(num);
	putchar('\n');

	return (0);
}
