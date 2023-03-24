#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * *string_nconcat - cocatenates two strings
 * @s1: first string
 * @s2: second string
 *
 * Return: returns a pointer to the concatenated string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *concat;

	unsigned int str1_len = 0, str2_len = 0, i;

	if(s1 != NULL)
		str1_len = strlen(s1);

	if (s2 != NULL)
		str2_len = strlen(s2);

	if (n >= str2_len)
		n = str2_len;

	concat = malloc(sizeof(char) * (str1_len + n + 1));
	

	for (i = 0; i < str1_len; i++)
		concat[i] = s1[i];

	for (i = 0; i < n; i++)
		concat[str1_len + i] = s2[i];

	concat[str1_len + n] = '\0';

	return (concat);
}
