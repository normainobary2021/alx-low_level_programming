#include "main.h"
/**
 * _isalpha - Checks for alphabetic characters
 * @c: Character to be checked
 * Return: 1 for alphabetic characters and 0 for non-alphabetic characters
 **/

int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
		return (1);
	}
	return (0);
}
