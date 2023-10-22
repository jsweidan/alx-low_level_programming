#include "main.h"

/**
 * _isalpha - checks the alphabetic character.
 * Desc: function that checks for alphabetic character.
 * @c: collects the character
 *
 * Returns: (1) if c is a letter, otherwise (0)
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
