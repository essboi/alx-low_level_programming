#include "main.h"

/**
 * print_last_digit - This function prints the last digit of a number
 *
 * @i: function parameter to be checked
 *
 * Return: Last value
 *
 */

int print_last_digit(int i)
{
	int j;

	j = i % 10;
	if (i < 0)
		j = -j;
	return (j);
}
