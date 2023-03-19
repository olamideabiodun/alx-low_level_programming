#include <stdlib.h>
#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * *str_concat - concatenates two strings
 * @s1: string to be concatenated
 * @s2: string to be concatenated
 *
 * Return: return NULL on failure
 */
char *str_concat(char *s1, char *s2)
{
	int len1, len2;
	char *result;
	if (s1 == NULL && s2 == NULL)
		return (NULL);

	if (s1 == NULL)
	{
		s1 = "";
	}

	if (s2 == NULL)
	{
		s2 = "";
	}


	len1 = strlen(s1);
	len2 = strlen(s2);
	result = malloc(len1 + len2 + 1);

	if (result == NULL)
	{
		return (NULL);
	}

	strcpy(result, s1);
		strcat(result, s2);

		return (result);
}
