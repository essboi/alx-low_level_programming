#include "main.h"

/**
  * *_strstr - This function locates a substring
  *
  * @haystack: String to be searched
  * @needle: first occurring substring
  *
  * Return: pointer to the beginning of the located substring
  */

char *_strstr(char *haystack, char *needle)
{
	char *h, *n;

	for (; *haystack != '\0'; haystack++)
	{
		h = haystack;
		n = needle;
		while (*n != '\0' && *h == *n)
		{
			h++;
			n++;
		}
		if (*n == '\0')
		{
			return (haystack);
		}
	}
	return (0);
}
