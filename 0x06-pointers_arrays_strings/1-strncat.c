#include "main.h"
#include <stdio.h>

/**
 * _strncat - concatenates two strings
 *
 * @src: the source to be appended to destination dest
 * @dest: the destination to be concatenated upon
 *
 * @n: the number of bytes
 * Return: the destination string @dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int n = 0;
	char *ptr = dest;

	while (*ptr != '\0')
	{
		*ptr++;
	}
	while (*src != '\0')
	{
		*ptr++ = *src++;
	}
	*ptr = '\0';
	return (dest);
}
