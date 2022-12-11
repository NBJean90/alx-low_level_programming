#include <stdio.h>
#include <ctype.h>
/**
 * main - program to print alphabet letters in reverse followed by new line
 *
 * Return: Always 0
 */
int main(void)
{
	int letter;

	for (letter = 'z'; letter >= 'a'; letter--)
	{
		putchar(letter);
	}
	putchar('\n');
	return (0);
}
