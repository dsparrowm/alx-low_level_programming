#include "main.h"

/**
 * print_line - prints line on the screem
 * @n: the character to primt
 *
 * Return: void
 */
void print_line(int n)
{
	int i = 0;

	for (i = 0; i < n; i++)
	{
		if (n == '0' || n < '0')
		{
			_putchar('\n');
		}
		else
		{
			_putchar('_');
		}
	}
	_putchar('\n');
}

