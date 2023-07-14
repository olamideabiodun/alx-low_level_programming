#include <stdio.h>

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
	int i, j, num;

	if (argc < 2)
	{
		printf("Error\n");
			return (1);
	}

	for (i = 1; i < argc; i++)
	{
		num = 0;
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			num = num * 10 + (argv[i][j] - '0');
		}

		result *= num;
	}
	printf("%d\n", result);
	return (0);
}
