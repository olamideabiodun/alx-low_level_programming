#include "main.h"

/**
 * _strcat - This is the main copy
 * @dest: destination
 * @src: source
 *
 * Return: destination
 */

char *_strcat(char *dest, char *src)
{
	int a, b;

	for (a = 0; dest[a] != '\0'; a++)
	{
	}
	for (b = 0; src[b] != '\0'; b++)
	{
	dest[a] = src[b];
	a++;
	}
	return (dest);
}
