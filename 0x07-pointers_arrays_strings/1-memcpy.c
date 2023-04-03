#include "main.h"

/**
  * _memcpy - This function copies memory area
  *
  * @n: function to be copied
  * @src: memory area source
  * @dest: memory area destination
  *
  * Return: returns pointer to dest
  */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *p = dest;

	while (n--)
	{
		*p++ = *src++;
	}
	return (dest);
}
