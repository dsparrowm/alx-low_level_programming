#include "main.h"
/**
 * more_numbers - print more numbers
 *
 * Return: void
 */
void more_numbers(void)
{
	int x;

	for (x = 0; x < 10; x++)
	{
		int y;

		for (y = 0; y <= 14; y++)
		{
			_putchar(y);
		}
		_putchar('\n');
	}
	_putchar('\n');
}
