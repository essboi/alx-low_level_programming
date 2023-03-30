#include "main.h"

/**
  * _strncpy - This function copies a string
  *
  * @src: The source of the strings
  * @dest: The destination of the string
  * @n: The length of the integer
  *
  * Return: Pointer to the resulting string
  */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && (*src + i); i++)
	{
		*(dest + i) = *(src + i);
	}
	for (; i < n; i++)
	{
		*(dest + i) = '\0';
	}
	return (dest);
}
