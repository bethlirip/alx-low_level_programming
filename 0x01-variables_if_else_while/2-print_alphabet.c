#include <stdio.h>

/**
 * main - this is the main function
 * Return: this will always be zero
 **/
int main(void)
{
	for (int x = 'A'; x <= 'Z'; x++)
		int lower_x = tolower(x);

		putchar(lower_x);

	return (0);
}
