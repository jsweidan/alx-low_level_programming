#include <stdio.h>
#include <unistd.h>

/**
 *main - print all single digit numbers
 *Description -of base 10 starting from 0
 *Return: Always 0
 */

int main(void)
{
	int n;

	for (n = 0; n <= 10; n++)
	{
		putchar (n + '0');
	}

	putchar ('\n');

	return (0);

}


