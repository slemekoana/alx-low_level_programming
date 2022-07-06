#include "main.h"

/**
 * _islower - checks if function is in lowercase
 *
 * Return : 1 if lowercase or 0 if uppercase
 */

int _islower(int c)
{
	char chr;

	int amount = 0;

	for (chr = 'a'; chr <= 'z'; chr++)
	{
		if (chr == c)
		{
			amount = 1;
		}
	}

	return (amount);
}
