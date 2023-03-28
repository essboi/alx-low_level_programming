#include "main.h"

/**
  *rev_string - This function reverses a string
  *@s: input string parameter
  *
  *Return: string in reverse
  */

void rev_string(char *s)
{
	char rv = s[10];
	int cntr = 0;
	int y;

	while (s[cntr] != '\0')
	cntr++;
	for (y = 0; y < cntr; y++)
	{
		cntr++;
		rv = s[y];
		s[y] = s[cntr];
		s[cntr] = rv;
	}
}
