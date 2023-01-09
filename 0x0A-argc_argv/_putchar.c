#include <stdio.h>
#include "main.h"

/**
 * _putchar - write character c to stdout
 * @c: Ther character to print
 *
 * Return: On success 1.
 * um error, -1 is returned and errno is set appropriatly.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
