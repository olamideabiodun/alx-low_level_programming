#include "main.h"
#include <stddef.h>
/**
 * _strchr - function
 * @s:string
 * @c:char
 *
 * Return: Result
 */

char *_strchr(char *s, char c)
{
	for (; ; s++)
	{
		if (*s == c)
			return (s);
		if (*s == 0)
			return (NULL);
	}
	return (NULL);
}
