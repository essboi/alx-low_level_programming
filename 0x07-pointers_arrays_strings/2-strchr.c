#include "main.h"

/**
  * *_strchr - This function locates a character in a string
  *
  * @c: first occurence of the character
  * @s: string parameter
  *
  *Return: Null if character isn't found
  */

char *_strchr(char *s, char c)
{
	int i = 0;

	for (; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
			return (&s[i]);
	}
	return (0);
}
