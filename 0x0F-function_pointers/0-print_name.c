#include "function_pointers.h"

/**
  * print_name - This function prints a name
  *
  * @name: This is the given name
  * @f: This is the function of name
  *
  * Return: void
  */

void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
	{
		f(name);
	}
}
