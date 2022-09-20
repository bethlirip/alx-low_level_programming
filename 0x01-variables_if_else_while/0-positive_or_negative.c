#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>
/* betty style doc for function main goes there */
/**
 * main - this is the main function
 * Return: retun wdill always be 0
 **/
int main(void)
{
	int n;
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n>0){
		printf("%i\nis positive", n);
	}else if(n==0){
		printf("%i\nis zero", n);
	}else{
		printf("%i\nis negative", n);
	}

	return (0);
}
