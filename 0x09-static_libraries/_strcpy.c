#include "main.h"
/**
 * _strcpy - copies string
 * @src: source
 * @dest:destination
 *
 * Return: copy
 */

char *_strcpy(char *dest, char *src)
{
	char *start = dest;

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (start);
}
