#include "main.h"

/**
 * more_numbers - Prints number 0 to 14, 10 times.
 */
void more_numbers(void)
{
	int num;
	int count;

	for (count = 0; count <= 9; count++)
	{
		for (num = 0; num <= 14; num++)
		{
			if (num > 9)
				_putchar((num / 10) + '0');
			_putchar((num % 10) + '0');
		}
		_putchar('\n');
	}
}
