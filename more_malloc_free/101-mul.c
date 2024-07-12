#include "main.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * printError - check the code
 *
 * Description: print
 *
 * @str: input
 *
 * Return: Always 0.
 */

void printError(char *str)
{
	int i;

	for (i = 0 ; str[i] ; i++)
		_putchar(str[i]);
	_putchar('\n');
}

/**
 * get_int_len - check the code
 *
 * Description: print
 *
 * @value: input
 *
 * Return: Always 0.
 */

int get_int_len(int value)
{
	int l = 1;

	while (value > 9)
	{
		l++;
		value /= 10;
	}
	return (l);
}

/**
 * printSum - check the code
 *
 * Description: print
 *
 * @num: input
 *
 * Return: Always 0.
 */

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
	_putchar('\n');
}

/**
 * multiply - check the code
 *
 * Description: print
 *
 * @num1: input
 *
 * @num2: input
 *
 * Return: Always 0.
 */

void multiply(int num1, int num2)
{
	int sum;

	sum = num1 * num2;
	printSum(sum);
}

/**
 * _atoi - check the code
 *
 * Description: print
 *
 * @s: input
 *
 * Return: Always 0.
 */

int _atoi(char *s)
{
	unsigned int number = 0;
	int negative = 0, i, stillNumbers = 1, backToOthers = 0;

	for (i = 0 ; s[i] != '\0' ; i++)
	{
		if ((s[i] == '-') && (stillNumbers == 1))
		{
			if (negative == 1)
				negative = 0;
			else
				negative = 1;
		}
		else if ((s[i] >= '0') && (s[i] <= '9') && (stillNumbers == 1))
		{
			number = (number * 10) + s[i] - '0';
			backToOthers = 1;
		}
		else if (backToOthers == 1)
			stillNumbers = 0;
	}
	if (negative == 1)
		number *= -1;
	return (number);
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
	int i, j, onlyNum = 1, num1, num2;

	if (argc != 3)
	{
		printError("Error");
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
		printError("Error");
		exit(98);
	}
	num1 = _atoi(argv[1]);
	num2 = _atoi(argv[2]);
	multiply(num1, num2);
	return (0);
}
