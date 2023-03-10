#include <stdio.h>
#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest: A pointer to be concatenated to
 * @src: The source to be appended to @dest
 *
 * Return: A pointer to the destination string @dest
 */
char *_strcat(char *dest, char *src)
{
	char *ptr = dest;

	while (*ptr != '\0')
	{
		ptr++;
	}

	while (*src != '\0')
	{
		*ptr++ = *src++;
	}

	*ptr = '\0';

	return (dest);
}
