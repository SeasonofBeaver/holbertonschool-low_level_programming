#include "main.h"

/**
 * print_name - begining
 *
 * Description: print if negative or positive
 *
 * @f: pointer for funtion
 *
 * @name: name to be printed
 *
 * Return: 0 ends the program
 */

void print_name(char *name, void (*f)(char *))
{
	f(name);
}
