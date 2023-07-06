#include "main.h"
#include <stdio.h>

/**
 * _strlen_recursion - returns length of a string
 * @s: string
 *
 * Return: length of string.
 */

int _strlen_recursion(char *s)
{
	int strlen = 0;

	while (*s != '\0')
	{
		strlen++;
		s++;
	}
	return (strlen);
}
