#include "main.h"


/**
 * _isalpha - check main
 *
 * @c: An input character
 *
 * description: function returns 1 if the character is a
 *
 * letter, lowercase or uppercase.
 *
 * Return: 1 0r 0
 */

int _isalpha(int c)
{
	char lower, upper;
	int isletter = 0;

	for (lower = 'a'; lower <= 'z'; lower++)
	{
		for (upper = 'A'; upper <= 'Z'; upper++)
		{
			if (c == lower || c == upper)
				isletter = 1;
		}
	}
	return (isletter);
}
