#include "main.h"

/**
  * _print_rev_recursion - This function prints a string in reverse
  *
  * @s: String parameter to be printed
  *
  * Return: Always 0
  */

void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
