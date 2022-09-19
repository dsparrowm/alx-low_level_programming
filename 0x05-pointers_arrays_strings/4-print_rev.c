#include "main.h"
#include <publib.h>
#include <stdio.h>

/**
 * print_rev - reverse a string
 * @s: string to reverse
 *
 * Return: void
 */
void print_rev(char *s)
{
	int c = 0;

	while (s[c])
	{
		c++;
	}
	c--;
	for (; c >= 0; c--)
	{
		_putchar(s[c]);
	}
	_putchar('\n');
}
