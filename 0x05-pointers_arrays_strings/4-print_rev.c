#include "main.h"

/**
  *print_rev - This function prints a string in reverse
  *followed by a new line
  *
  *@s: String parameter
  *
  *Return: 0
  */

void print_rev(char *s)
{
	int x = 0;
	int o;

	while (*s != '\0')
	{
		x++;
		s++;
	}
	s--;
	for (o = x; o > 0; o--)
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n');
}
