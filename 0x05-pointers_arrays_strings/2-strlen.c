#include <stdio.h>
#include "main.h"

/**
 * _strlen - returns the lenght of a string
 *
 * @s: string to count
 * Return: Always 0
 */

int _strlen(char *s)
{

	int c;

	for (c = 0; *s != '\0'; s++)
	{
		c++;
	}

	return (c);
}
