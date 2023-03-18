#include <stdio.h>
#include "main.h"
/**
 * factorial - returns the factorial of a given number
 * @n:input
 *
 * Return: returns -1 if the input is lesser than zero and 1 if else
 */

int factorial(int n)
{
	if (n < 0)

		return (-1);

	else if (n == 0)
	{
		return (1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
