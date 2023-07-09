#include "main.h"

/**
 * wildcmp_recursive - Helper function to compare two strings recursively
 * @s1: First string
 * @s2: second string
 *
 * Return: 1 if strings are considered identical, 0 otherwise
 */
int wildcmp_recursive(char *s1, char *s2)
{
	if (*s2 == '*')
	{
		if (*(s2 + 1) == '\0')
			return (1);

		if (*s1 == '\0')
			return (wildcmp_recursive(s1, s2 + 1));

		if (wildcmp_recursive(s1, s2 + 1))
			return (1);

		return (wildcmp_recursive(s1 + 1, s2));
	}

	if (*s1 != *s2)
		return (0);

	return (wildcmp_recursive(s1 + 1, s2 + 1));
}

/**
 * wildcmp - Compares two strings and checks if  identical
 * @s1: First string
 * @s2: second string
 *
 * Return: 1 if strings are considered identical, 0 otherwise
 */
int wildcmp(char *s1, char *s2)
{
	return (wildcmp_recursive(s1, s2));
}
