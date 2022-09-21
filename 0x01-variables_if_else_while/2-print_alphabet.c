#include <stdio.h>

/**
 * main - this is the main function
 * Return: this will always be zero
 **/
int main(void)
{
	int x, lower_x;

	for (x = 'A'; x <= 'Z'; x++)
		putchar(tolowerI(x));

	return (0);
}
