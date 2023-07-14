#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies two numbers
 * @argc: count of arguments
 * @argv: pointer to arguments
 *
 * Return: 0 on success, else 1
 */
int main(int argc, char **argv)
{
	int result = 1;
	int i;

	if (argc < 2)
	{
		printf("Error\n");
			return (1);
	}

	for (i = 1; i < argc; i++)
	{
		int num = atoi(argv[i]);

		result *= num;
	}
	printf("%d\n", result);
	return (0);
}
