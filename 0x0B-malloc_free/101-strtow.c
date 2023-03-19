#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
	* count_words - Counts the number of words in a string.
	* @str: The string to be checked.
	*
	* Return: The number of words.
	*/
int count_words(char *str)
{
	int count = 0, flag = 0;

	while (*str)
	{
	if (*str == ' ' || *str == '\t' || *str == '\n')
	flag = 0;
	else if (flag == 0)
	{
	flag = 1;
	count++;
	}
	str++;
	}

	return (count);
}

/**
	* free_words - Frees an array of strings.
	* @words: The array of strings to be freed.
	* @n: The number of strings to be freed.
	*
	* Return: Nothing.
	*/
void free_words(char **words, int n)
{
	int i;

	for (i = 0; i < n; i++)
	free(words[i]);

	free(words);
}

/**
	* strtow - Splits a string into words.
	* @str: The string to be split.
	*
	* Return: If successful - a pointer to an array of strings (words);
	*         If failure - NULL.
	*/
char **strtow(char *str)
{
	char **words;
	int count, i, j, k, len;

	if (str == NULL || *str == '\0')
	return (NULL);

	count = count_words(str);

	if (count == 0)
	return (NULL);

	words = malloc(sizeof(char *) * (count + 1));

	if (words == NULL)
	return (NULL);

	for (i = 0, j = 0; i < count; i++)
	{
	while (str[j] == ' ' || str[j] == '\t' || str[j] == '\n')
	j++;

	len = 0;

	while (str[j + len] != ' ' && str[j + len] != '\t'
	&& str[j + len] != '\n' && str[j + len] != '\0')
	len++;

	words[i] = malloc(sizeof(char) * (len + 1));

	if (words[i] == NULL)
	{
	free_words(words, i);
	return (NULL);
	}

	for (k = 0; k < len; k++)
	words[i][k] = str[j++ + k];

	words[i][k] = '\0';
	}

	words[i] = NULL;

	return (words);
}

