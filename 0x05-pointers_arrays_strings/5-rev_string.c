#include "main.h"

/**
  *rev_string - This function reverses a string
  *@s: input string parameter
  *
  *Return: string in reverse
  */

void rev_string(char *s)
{
	int x = 0;
	int y;
	int z;
	char c;

	while (s[x] != '\0')
	{
		x++;
	}
	z = x - 1;
	for (y = 0; z >= 0 && y < z; z--, y++)
	{
		c = s[y];
		s[y] = s[z];
		s[z] = c;
	}
}
