#include "main.h"

/**
 * print_alphabet - print alphabet in lower case
 * Return: 0
 */

void print_alphabet(void)
{
	char ab;

	ab = 'a';

		while (ab <= 'z')
		{
			_putchar(ab);
			ab++;
		}

	_putchar('\n');
}
