#include <stdio.h>

/**
 * main - entry point
 *
 * Return: always 0 for success
 */
int main(void)
{
	int aint;
	char achar;
	long int alongit;
	long long int alonglong;
	float afloat;
	printf("Size of an char: %lu byte(s)\n", sizeof(achar));
	printf("Size of an int: %lu byte(s)\n", sizeof(aint));
	printf("Size of a long int: %lu byte(s)\n", sizeof(alongit));
	printf("Size of a long long int: %lu byte(s)\n", sizeof(alonglong));
	printf("Size of a float: %lu byte(s)\n", sizeof(afloat));
	return (0);
}
