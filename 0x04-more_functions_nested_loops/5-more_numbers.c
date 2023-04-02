#include "main.h"

/**
 * More_numbers.c - Prints number 0 to 14, 10 times
 */
void more_numbers(void)
{
	int num;
	int count = 0;

	for (num = 0; num < 15; num++)
		while (count < 11)
		{
			_putchar(num + '0');
			_putchar('\n');
			count++;
		}

	_putchar('\n');
}
