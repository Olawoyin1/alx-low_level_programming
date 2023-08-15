#include "main.h"

/**
 * print_alphabet_x10 - this function will print the alphabet 10 tmes \
 * Return: 0
 */

void print_alphabet_x10(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		char i;

		for (i = 'a'; i <= 'z'; i++)
			_putchar(i);
		_putchar('\n');
	}
}
