#include <stdio.h>
#include <unistd.h>

/*
 *main - print all numbers base of 10
 *Description: not allowed to use char
 *Return: Always 0
 */

int main(void)
{
	int a;

	for (a = 0; a < 10; a++)
	{
		putchar(a + '0');
	}

	putchar('\n');
	return (0);
}
