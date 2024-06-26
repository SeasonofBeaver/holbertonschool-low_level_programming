#include <stdio.h>

/**
 * main - check the code
 *
 * Description: print
 *
 * Return: Always 0.
 */

int main(void)
{
	long int number = 612852475143;
	long int i, largestPrimeFactor;

	i = 0;
	largestPrimeFactor = 0;
	while (i <= (number / 2))
	{
		if ((number % i) == 0)
		{
			number = number / i;
			if (largestPrimeFactor < i)
				largestPrimeFactor = i;
			i = 0;
		}
		i++;
	}
	printf("%li", largestPrimeFactor);
	return (0);
}
