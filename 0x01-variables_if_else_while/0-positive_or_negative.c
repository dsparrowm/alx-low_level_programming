#include <stdlib.h>
#include <time.h>
#include <math.h>
#include <stdio.h>

/**
 * main -determines if a number is positive or negative
 *
 * Return: always 0 for success
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n < 0)
	{
		printf("%d is negative\n", n);
	}
	if (n == 0)
	{
		printf("%d is zero\n", n);
	}
	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	return (0);
}
