#include "main.h"

/**
 * _strlen - calculates the length of a string
 * @s: String
 *
 * Return: length of a string
 */
int _strlen(char *s)
{
	if (*s == '\0')
		return (0);

	return (1 + _strlen(s + 1));
}

/**
 * is_palindrome_recursive - Helper function to check
 * @s: String to check
 * @left: left index
 * @right: right index
 *
 * Return: 1 if string is a palindrome, else 0.
 */
int is_palindrome_recursive(char *s, int left, int right)
{
	if (left >= right)
		return (1);

	if (s[left] != s[right])
		return (0);

	return (is_palindrome_recursive(s, left + 1, right - 1));
}
/**
 * is_palindrome - Checks if a string is a palindrome
 * @s: String to check
 *
 * Return: 1 if true else 0.
 */
int is_palindrome(char *s)
{
	int len = _strlen(s);

	return (is_palindrome_recursive(s, 0, len - 1));
}
