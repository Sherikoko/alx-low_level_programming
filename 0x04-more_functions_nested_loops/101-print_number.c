#include "main.h"

/**
 * print_number - a function that prints an integr.
 * @n: An input integer
 * Return: Nothing
 */


void print_number(int n)
{

	if (n == 0)
		_putchar('0');
	else if (n < 0)
	{
		_putchar('-');
		printf(n * -1);
	}
	else
		printf(n);
}
