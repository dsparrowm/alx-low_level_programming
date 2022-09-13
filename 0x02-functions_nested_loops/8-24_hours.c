#include <stdio.h>

/**
 * jack_bauer - primt numbers
 *
 * Return: success
 */
void jack_bauer(void)
{
	int hour = 0;
	int min = 0;

	while (hour <= 23)
	{
		printf("%.2d:%.2d\n", hour, min);
		min++;
		if (min >= 60)
		{
			min = 0;
			hour++;
		}
	}
}
