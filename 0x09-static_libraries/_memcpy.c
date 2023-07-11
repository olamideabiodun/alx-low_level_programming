#include "main.h"

/**
 * _memcpy - copy src to dest
 * @src: source
 * @dest: destination
 *
 * Return: string copy
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int a;
	char *pDst = dest;
	char const *pSrc =  src;

	for (a = 0; a < n; a++)
	{
		*pDst++ = *pSrc++;
	}
	return (dest);
}
