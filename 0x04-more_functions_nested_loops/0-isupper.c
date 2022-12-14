#include <stdio.h>
#include "main.h"

/**
 * _isupper - a function that checks if a character is in uppercase
 *
 * @c: An input character
 *
 * Return: 1 if c is uppercase or 0 otherwise
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
