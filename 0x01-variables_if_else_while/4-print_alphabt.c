#include <stdio.h>

/**
 *main- This is the program's entry point.
 *Return: Program returns zero if no error
 **/

int main(void)

{
	char i;

	for (i = 'a'; i <= 'z'; i++)
	{
		if (i == 'e' || i == 'q')
			continue;
		putchar(i);
	}
	putchar('\n');
	return (0);
}
