#include <stddef.h>
#include <stdlib.h>

void printError(void)
{
	_putchar("E");
	_putchar("r");
	_putchar("r");
	_putchar("o");
	_putchar("r");
	_putchar("\n");
}



int get_int_len (int value)
{	
	int l = 1;
	
	while (value > 9)
	{
		l++;
		value/=10;
	}
	return l;
}


void printSum(int num)
{
	int i, prnt;

	i = get_int_len(num);
	i--;
	for (; i > 0 ; i--)
	{
		prnt = (num / i) % 10;
		_putchar(prnt + '0');
	}
	_putchar("\n");
}

void multiply(int num1, int num2)
{
	int sum;

	sum = num1 * num2;
	printSum(sum);
}

/**
 * main - check the code
 *
 * Description: print
 *
 * @argc: argument count
 *
 * @argv: arguments
 *
 * Return: Always 0.
 */

int main(int argc, char *argv[])
{
	int i, j, onlyNum = 1;
	
	if (argc != 3)
	{
		printError;
		exit(98);
	}
	for (j = 1 ; j <= 2 ; j++)
		for (i = 0 ; argv[j][i] != '\0' ; i++)
		{
			if ((argv[j][i] >= 0) && (argv[j][i] <= 9))
			;
			else
				onlyNum = 0;
		}
	if (onlyNum == 0)
	{
		printError;
		exit(98);
	}
	multiply(argv[1], argv[2]);
	return (0);
}
