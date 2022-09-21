#include <stdio.h>

/**
 * main - this is the main function
 * Return: this will retun 0
 **/
int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)

		if (letter != 'e' && letter != 'q')
			putchar(letter);

	putchar('\n');

	return (0);
}
