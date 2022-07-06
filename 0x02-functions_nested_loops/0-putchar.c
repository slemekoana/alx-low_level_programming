#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include "_putchar.c"

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
char c[8] = "_putchar";
int i;

for (i = 0; i  < 8; i++)
{
	_putchar(c[i]);
}
_putchar('\n');

return (0);
}
