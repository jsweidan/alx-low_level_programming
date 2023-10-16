#include "main.h"

/**
 *_isalpha - checks the alphabetic character
 *@c: collects the character
 *Description: checks the alphabet either lower or uppercase
 *Returns: (1) if c is a letter otherwise (0)
 */

int _isalpha(int c)
{
	char lower, upper;
	int letter = '0';

	for (lower = 'a'; upper <= 'z'; lower++)
	{
		for (upper = 'A'; upper <= 'Z'; upper++)
		{
			if (lower == c || upper == c)
			{
				letter = 1;
			}
		}
	}
	return (letter);
}
