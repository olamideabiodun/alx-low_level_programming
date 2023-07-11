#include <unistd.h>
/**
 * _putchar - writes the char to stout
 * @c: char
 *
 * Return: Success
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
