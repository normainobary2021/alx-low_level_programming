#include "main.h"

/**
 * print_last_digit - Prints the last digit of a number
 * @m: The number to be checked
 * Return: Value of the last digit
 **/

int print_last_digit(int m)
{
	int last;

	last = m % 10;
	if (last < 0)
	{
		last = last * -1;
	}
	_putchar(last + '0');
	return (last);
}
