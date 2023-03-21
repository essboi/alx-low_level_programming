#include "main.h"

/**
 * print_sign - This function prints the sign of a number
 *
 * @n: parameter to be be checked
 *
 * Return: 1 and prints + if n is greater than zero
 * 0 if n is zero, otherwise -1 and prints -
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		_putchar(',');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		_putchar(',');
		return (0);
	}
	else
	{
		_putchar('-');
		_putchar(',');
		return (-1);
	}
}
