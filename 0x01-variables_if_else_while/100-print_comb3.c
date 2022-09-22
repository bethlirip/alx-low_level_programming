#include <stdio.h>

/**
 * main - will print numbers from 00 to 99 separated
 * by a comma and space
 * Retun: always 0
 **/
int main(void)
{
	int digit_1, digit_2;

	for (digit_1 = 0; digit_1 < 10; digit_1++)
	{
		for (digit_2 = 0; digit_2 < 10; digit_2++)
		{
			putchar((digit_1 % 10) + '0');
			putchar((digit_2 % 10) + '0');

			if (digit_1 == 9 && digit_2 == 9)
				continue;

				putchar(',');
				putchar(' ');
		}
	}

	putchar('\n');

	return (0);
}
