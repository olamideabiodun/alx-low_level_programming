#include <stdio.h>

/**
 * main - prints the name of program
 * @argc: count of arguments
 * @argv: pointer to the arguments
 *
 * Return: 0.
 */
int main(int argc, char *argv[])
{
	(void)argc;

	printf("%s\n", argv[0]);
	return (0);
}
