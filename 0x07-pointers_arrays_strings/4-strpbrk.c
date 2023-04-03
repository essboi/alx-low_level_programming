#include "main.h"

/**
 * _strpbrk - This function searches a string
 * for any of a set of bytes
 *
 * @s: First occurence in the string
 * @accept: matches byte or NULL
 *
 * Return: Pointer to the byte
 */

char *_strpbrk(char *s, char *accept)
{
		int a;

		while (*s)
		{
			for (a = 0; accept[a]; a++)
			{
			if (*s == accept[a])
			return (s);
			}
		s++;
		}

	return ('\0');
}
