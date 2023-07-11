#include "main.h"

/**
 * _memset - copy number to char S
 * @s: entry and return
 * @b: character to copy
 * @n: size
 *
 * Return: result
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n; a++)
	{
		s[a] = b;
	}
	return (s);
}
