#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * str_concat - concatenates two strings
 * @s1: first string
 * @s2: second string
 *
 * Return: pointer to the concatenated string else NULL
 */
char *str_concat(char *s1, char *s2)
{
	char *conc;
	size_t len1, len2;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

len1 = strlen(s1);
len2 = strlen(s2);

conc = malloc((len1 + len2 + 1) * sizeof(char));
if (conc == NULL)
	return (NULL);

strcpy(conc, s1);
strcat(conc, s2);

return (conc);
}
