#include <stdio.h>

/**
 * main - this is the main function
 * Return: this will return 0
 **/
int main(void)
{
	int sn;

	for (sn = 0; sn < 10; sn++)
		putchar((sn % 10) + '0');

	putchar('\n');

	return (0);
}
