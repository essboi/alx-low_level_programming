#include "main.h"

/**
 * print_alphabet_x10 - This function prints alphabet ten times
 *
 * Return: Always 0
 */

void print_alphabet_x10(void)
{
	int i;
	char abc;

	for (i = 1; i <= 10; i++)
	{
		for (abc = 'a'; abc <= 'z'; abc++)
			_putchar(abc);
		_putchar('\n');

	}
}
