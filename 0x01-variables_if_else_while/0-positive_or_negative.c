#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* more headers go here */

/* betty style doc for function main goes there */

/**
 * main- This is the program's entry point
 * Return: It returns zero if program is successful
 **/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else if (n < 0)
	{
		printf("%d is negative\n", n);
	}
	else if (n == 0)
		printf("%d is zero\n", n);
	return (0);
}
