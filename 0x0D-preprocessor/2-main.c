#include <stdio.h>

/**
 *main - print out file name from where it is compiled
 *
 *Return: int
 */

int main(void)
{
	printf("%s\n", __FILE__);
	return (0);
}
