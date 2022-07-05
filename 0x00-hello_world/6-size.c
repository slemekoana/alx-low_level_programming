#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 *
 */

int main(void)
{
	int num;
	long int dec;
	long long int dou;
	char chr;
	float fl;

	printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(chr));
	printf("Size of an int: %lu byte(s)\n", (unsigned long)sizeof(num));
	printf("Size of a long int: %lu byte(s)\n", (unsigned long)sizeof(dec));
	printf("Size of a long long int: %lu byte(s)\n", (unsigned long)sizeof(dou));
	printf("Size of a float: %lu byte(s)\n", (unsigned long)sizeof(fl));
	return (0);
}
