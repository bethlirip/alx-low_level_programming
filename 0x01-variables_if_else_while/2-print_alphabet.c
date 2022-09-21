#include <stdio.h>

/**
 * main - this is the main function
 * Return: this will always be zero
 **/
int main(void)
{
	char letter;

	for (letter = 'A'; letter <= 'Z'; letter++)
		putchar(letter);
	putchar(\n);

	return (0);
}
