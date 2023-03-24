#include "main.h"

/**
 * print_line - This function draws a straight line
 * @n: parameter to be checked
 *
 * Return: void
 */

void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
