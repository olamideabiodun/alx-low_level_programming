#include "3-calc.h"
#include <stdio.h>
#include <stdlib>

/**
 * op_add - add two integers
 * @a: first number
 * @b: second integer
 *
 * Return: sum of a & b.
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - differences of two integers
 * @a: num1
 * @b: num2
 *
 * Return: differences of a & b.
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiplies two integers
 * @a: num1
 * @b: num2
 *
 * Return: product of a & b.
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - divides a by b
 * @a: num1
 * @b: num2
 *
 * Returns: result of division of a by b.
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		return (0);
	}
	else
	{
		return (a / b);
	}
}

/**
 * op_mod - modulo of a number
 * @a: num1
 * @b: num2
 *
 * Return: remainder of the division of a by b
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		return (0);
	}
	else
	{
		return (a % b);
	}
}
