#include "main.h"

/**
 * print_alphabet_x10 - prints a to z 10 times on screen
 *
 * Return o as success
 */
void print_alphabet_x10(void)
{
	int x = 1;

	while (x <= 10)
	{
		int i = 'a';

		while (i <= 'z')
		{
			_putchar(i);
			i++;
		}
		_putchar('\n');
		x++;
	}
}
