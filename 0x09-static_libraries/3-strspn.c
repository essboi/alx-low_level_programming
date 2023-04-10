#include "main.h"

/**
  * _strspn - This function gets the length of a prefix substring
  *
  * @s: charater parameter
  * @accept: character parameter
  *
  * Return: Number of bytes
  */

unsigned int _strspn(char *s, char *accept)
{
	int a = 0, i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] != 32)
		{
			for (j = 0; accept[j] != '\0'; j++)
			{
				if (s[i] == accept[j])
					a++;
			}
		}
		else
			return (a);
	}
	return (a);
}
