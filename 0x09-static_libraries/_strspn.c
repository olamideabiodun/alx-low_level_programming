#include "main.h"
/**
 * _strspn - fnctiom
 * @s: string
 * @accept: accept
 *
 * Return: Success
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int a, b, c;

	c = 0;
	for (a = 0; s[a] != '\0'; a++)
	{
		for (b = 0; accept[b] != '\0'; b++)
		{
			if (accept[b] == s[a])
			{
				c++;
				break;
			}
		}
		if (accept[b] != s[a])
		{
		break;
		}
	}
	return (c);
}
