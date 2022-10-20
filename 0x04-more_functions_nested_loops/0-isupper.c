#include <stdio.h>
#include "main.h"

/**
 * main - more functions
 * Return: 0
 */

int _isupper(int c)
{
	int result = 0;
	char uppercase = 'A';

	for (; uppercase <= 'Z'; uppercase++)
	{
		if (c == uppercase)
		{
			result = 1;
			break;
		}
	}
	return (result);
}
