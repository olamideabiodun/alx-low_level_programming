#include "main.h"

/**
 * helper - checks if a number is a prime number
 * @n: integer
 * @d: divisor
 *
 * Return: 1 if integer is a prime number else 0.
 */
int helper(int n, int d)
{
	if (d == 1)
	{
		return (1);
	}
	if (n % d == 0)
	{
		return (0);
	}

	return (helper(n, d - 1));
}

/**
 * is_prime_number - Checks if s number is prime
 * @n: Number to check
 *
 * Return: 1 if true else 0
 */
int is_prime_number(int n)
{
	return (helper(n, n - 1));
}
