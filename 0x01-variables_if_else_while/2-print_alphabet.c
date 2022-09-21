#include <stdio.h>

/**
 * main - this is the main function
 * Return: this will always be zero
 **/
int main(void)
{
	int x, lower_x;

	for (x = 'A'; x <= 'Z'; x++)
		lower_x = tolower(x);
		putchar(lower_x);

	return (0);
}
