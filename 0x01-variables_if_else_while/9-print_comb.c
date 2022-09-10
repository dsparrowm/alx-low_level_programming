#include <stdio.h>
/**
 * main - entry point
 *
 * Return: success
 */
int main(void)
{
	int x = '0';

	while (x <= '9')
	{
		putchar(x);
		if (x == '9')
		{
			putchar('\n');
			return (0);
		}
		else
		{
			putchar(',');
			putchar(' ');
			x++;
		}
	}
	return (0);
}
