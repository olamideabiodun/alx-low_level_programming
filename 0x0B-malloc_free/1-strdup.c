#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "main.h"

/**
 * *_strdup - returns a pointer to a newly allocated space in memory
 * @str: string given as parameter
 *
 * Return: returns a pointer to a newly allocated space in memory
 */

char *_strdup(char *str)
{
	char *new;

	if (str == 0)
		return (NULL);

	new = malloc(strlen(str) + 1);

	if (new == 0)
		return (NULL);

	strcpy(new, str);

	return (new);
}

