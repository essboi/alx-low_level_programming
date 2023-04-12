#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - check the code for ALX School students.
 *
 * @ac: function parameter 1
 * @av: function parameter 2
 *
 * Return: Always 0.
 */

int main(int ac, char *av[])
{
	char *s;

	s = argstostr(ac, av);
	if (s == NULL)
	{
	return (1);
	}
	printf("%s", s);
	free(s);
	return (0);
}
