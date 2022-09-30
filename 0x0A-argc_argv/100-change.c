#include <stdio.h>
#include <stdlib.h>
/**
 * main - entry point
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: always 0
 */
int main(int argc, char *argv[])
{
	int num;
	int cents;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		num = atoi(argv[1]);
		if (num < 0)
			printf("0\n");
		else
		{
			while (num - 25 >= 0)
			{
				num -= 25;
				cents++;
			}
			while (num - 10 >= 0)
			{
				num -= 10;
				cents++;
			}
			while (num - 5 >= 0)
			{
				num -= 5;
				cents++;
			}
			while (num - 1 >= 0)
			{
				num -= 1;
				cents++;
			}
		}
	}
	printf("%d\n", cents);
	return (0);
}

