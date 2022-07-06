#include "main.h"

/**
 * print_alphabet_x10 - print alphabet 10 times
 *
 * Return: Nothing
 */

void print_alphabet_x10(void)
{
	char chr;

	int num;

	for (num = 0; num < 10; num++)
	{
		for (chr = 'a'; chr <= 'z'; chr++)
		{
			_putchar(chr);
		}
		_putchar('\n');
	}
}
