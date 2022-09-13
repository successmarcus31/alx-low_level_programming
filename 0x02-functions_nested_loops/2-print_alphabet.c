#include "main.h"

/**
 * print_alphabet_x10 - prints out alphabets 10 times
 *
 * Auth : ALABI TIMOTHY
 *
 */

void print_alphabet_x10(void)
{
	int i;
	char c;

	for (i = 1; i <= 10; i++)
	{
		for (c = 'a'; c <= 'z'; c++)
		{
			_putchar(c);
		}
		_putchar('\n');
	}
}
