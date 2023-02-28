#include <stdio.h>

/**
 * main - check for a digit (0 through 9)
 * @c: input
 * Return: 1 if c is a digit & 0 otherwise
 */

int _isdigit(char c)
{
	if ((c >= 0) && (c <= 9))
		return (1);
	else
		return (0);
}
