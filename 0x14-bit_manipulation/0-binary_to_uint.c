#include <stdio.h>
#include "main.h"
/**
 * binary_to_uint - converts binary to unit
 * @b: char string
 *
 * Return: coverted number (result)
 *
 */
unsigned int binary_to_uint(const char *b)
{
	int len = 0, result = 0, mul = 1, i;

	if (b == NULL)
	{
		return (0);
	}
	while (b[len])
	{
		len++;
	}
	for (i = len - 1; i >= 0; i--)
	{
		if (b[i] != '0' && b[i] != '1')
		{
			return (0);
		}
		if (b[i] == '1')
		{
			result = result + mul;
		}
		mul = mul * 2;
	}
	return (result);
}
