#include "main.h"

/**
 * print_to_98 - Print all natural numbers from input to 98,
 *               in order separated by a comma following by a space.
 * @n: The number to begin countinf at.
 */
void print_to_98(int n)
{
	if (n >= 98)
	{
		while (n > 98)
			printf("%d, ", n--);
		printf("%d\n", n);
	}
	else
	{
		while (n < 98)
			printf("%d, ", n++);
		printf("%d\n", n);
	}
}
