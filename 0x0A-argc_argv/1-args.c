#include <stdio.h>
/**
 * main - prints argc
 * @argc: counts of arguments
 * @argv: pointer to the arguments
 *
 * Return: 0.
 */
int main(int argc, char *argv[])
{
	while (*argv++)
	{
	}

	printf("%d\n", argc - 1);
	return (0);
}
