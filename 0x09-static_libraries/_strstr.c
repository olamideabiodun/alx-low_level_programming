#include "main.h"
#include <stdio.h>
/**
 * _strstr - checks a substring inside a string
 * @needle: substring
 * @haystack: string
 *
 * Return: location of substring
 */
char *_strstr(char *haystack, char *needle)
{
	int i;

	i = 0;
	while (haystack[i] != '\0')
	{
		int j, start;

		start = i;
		j = 0;
		while (haystack[i] == needle[j] &&
		       needle[j] != '\0' && haystack[i] != '\0')
		{
			i++;
			j++;
		}
		if (needle[j] == '\0')
			return (haystack + start);
		i = start + 1;
	}
	return (NULL);
}
