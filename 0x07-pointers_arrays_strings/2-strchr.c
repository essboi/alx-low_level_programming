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
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	return (0);
}
