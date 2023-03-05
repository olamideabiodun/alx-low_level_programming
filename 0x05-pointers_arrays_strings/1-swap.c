#include <stdio.h>
#include "main.h"

/**
 * swap_int - a function that swap the values of two integers
 *
 * @a: pointer to integer a
 * @b: pointer to integer b
 *
 * Return: Always 0 (success)
 */

void swap_int(int *a, int *b)
{
	int aux;

	aux = *a;
	*a = *b;
	*b = aux;
}
