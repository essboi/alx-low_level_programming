#include "main.h"

/**
 * puts2 - This function prints every other character
 * of a string followed by a new line
 *
 * @str: parameter to be checked
 *
 * Return: Print
 */

void puts2(char *str)
{
	int s;

	for (s = 0; str[s] != '\0'; s++)

		if (s % 2 == 0)
		{
			_putchar(str[s]);
		}
	_putchar('\n');
}
