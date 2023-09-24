#include "main.h"

/*
 *int _strlen - function
 *
 *Return: the length
 */

int _strlen(char *s)
{
	int i;
	int count = 0;

	for (i = 0; s[i] != '\0'; i++)
		count++;
	return (count);
}
