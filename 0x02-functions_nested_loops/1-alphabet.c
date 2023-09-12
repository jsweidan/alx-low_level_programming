#include "main.h"

/**
 * print_alphabet - print alphabet in lower case
 * Return: Always 0
 */

void print_alphabet(void)
{
	char c;
	int i = 0;

		while (i <= 9)
		{
			for (c = 'a'; c <= 'z'; c++)
			{
				_putchar(c);
			}
				_putchar(\'n');
				i++;
		}
}
