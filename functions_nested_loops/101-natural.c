#include <stdio.h>

/**
 * main - begining
 *
 * Description: print if negative or positive
 *
 * Return: 0 ends the program
 */

int main(void)
{
	int sum, i;

	for (i = 1 ; i < 1024 ; i++)
	{
		if ((i % 3) == 0)
			sum += i;
		else if ((i % 5) == 0)
			sum += i;
	}
	printf("%i\n", sum);
	return (0);
}
