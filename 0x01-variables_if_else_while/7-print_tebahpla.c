#include <stdio.h>

/**
 * main - this is the main function
 * Return: this will return 0
 **/
int main(void)
{
	char rl;

	for (rl = 'z'; rl >= 'a'; rl++)
		putchar(rl);

	putchar('\n');

	return (0);
}
