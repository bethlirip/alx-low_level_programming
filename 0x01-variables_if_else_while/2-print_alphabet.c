#include <stdio.h>

/**
 * main - this is the main function
 * Return: this will always be zero
 **/
int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		putchar(letter);
	putchar('\n');

	return (0);
}
