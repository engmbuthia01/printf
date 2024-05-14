#include "main.h"

/**
 * _putchar - write a single character to the
 * standard output
 *
 * @c: character to be printed
 * Return: a single character
 *
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
