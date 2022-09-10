#include <stdio.h>

/**
 * main - entry point
 *
 * Return: always 0 as success
 */
int main(void)
{
	for (char c = 'a'; c <= 'z'; c++)
	{
		if (c != 'e' && c != 'q')
		{
			putchar(c);
		}
	}
	putchar('\n');
	return (0);
}
