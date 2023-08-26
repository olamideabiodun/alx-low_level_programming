#include <stdio.h>
#include "main.h"
/**
 * get_endianness - check endianness
 * Return: 0 if big endian, or 1 if little endian
 */
int get_endianness(void)
{
	int n = 1;

	return (*(char *) &n);
}
