#include "main.h"

/**
 * _sqrt_recursive - checks if square root of the G is equal to n or greater
 * @n: input
 * @G: first guess
 *
 * Return: The natural sqrt
 */
int _sqrt_recursive(int n, int G)
{

	if (G * G == n)
	{
		return (G);
	}
	else if (G * G > n)
	{
		return (-1);
	}
	else
	{
		return (_sqrt_recursive(n, G + 1));
	}
}

/**
 *  _sqrt_recursion - returns the natural square root of n
 * @n: number to find the square root
 *
 * Return: sqrt of n or -1 if no natural sqrt
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	return (_sqrt_recursive(n, 0));
}

