#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
	* argstostr - Concatenates all the arguments of a program.
	* @ac: The number of arguments.
	* @av: An array of pointers to the arguments.
	*
	* Return: If ac == 0, av == NULL, or the function fails - NULL.
	*         Otherwise - a pointer to the new string.
	*/
char *argstostr(int ac, char **av)
{
	char *str;
	int i, j, k = 0, len = 0;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		j = 0;
		while (av[i][j])
		{
			len++;
			j++;
		}
		len++;
	}

	str = malloc(sizeof(char) * len + 1);

	if (str == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		j = 0;
		while (av[i][j])
		{
			str[k] = av[i][j];
			j++;
			k++;
		}
		str[k] = '\n';
		k++;
	}
	str[k] = '\0';

	return (str);
}

