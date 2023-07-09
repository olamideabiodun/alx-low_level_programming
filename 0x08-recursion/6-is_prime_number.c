#include "main.h"

/**
 * is_prime_recursive - checks if a number is prime recursively
 * @n: number to check
 * @d: divisor
 *
 * Return: 1 if true else 0
 */
int is_prime_recursive(int n, int d)
{
	if (n <= 1)
		return (0);

	if (d == 1)
		return (1);

	if (n % d == 0)
		return (0);

	return (is_prime_recursive(n, d - 1));
}

/**
 * is_prime_number - check prime
 * @n: number to check
 *
 * Return: 1 if yes, else 0
 */
int is_prime_number(int n)
{
	return (is_prime_recursive(n, n - 1));
}
