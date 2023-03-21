#include "main.h"

/**
 * print_alphabet - this function prints alphabets a-z in lower cases
 *
 * Return: ALways 0
 */

void print_alphabet(void)
{
	char abc;

	for (abc = 'a'; abc <= 'z'; abc++)
		_putchar(abc);
	_putchar('\n');
}
