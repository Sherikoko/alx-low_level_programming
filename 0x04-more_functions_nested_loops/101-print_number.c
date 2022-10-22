#include "main.h"


/**
 * print_number - prints an integer
 * @n: random integer
 * Return: void
 */


void print_number(int n)

{
	char ld, cr;
	int m;
	int ct = 0;

	if (n < 0)
	{
		_putchar ('-');
		ld = (char)('0' - (n % 10));
		n = n / -10;
	}
	else
	{
		ld = (char)((n % 10) + '0');
		n = n / 10;
	}
	m = 0;
	while (n > 0)
	{
		m = m * 10 + (n % 10);
		n = n / 10;
		ct++;
	}
	while (m > 0)
	{
		cr = (char)((m % 10) + '0');
		_putchar(cr);
		m = m / 10;
		ct--;
	}
	while (ct != 0)
	{
		_putchar('0');
		ct--;
	}
	_putchar(ld);
}
