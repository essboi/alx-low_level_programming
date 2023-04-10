#include "main.h"

/**
  * *_memset - This function fills memory with cosntant byte
  *
  * @n: the byte of the memory area
  * @s: the pointer variable
  * @b: the constant byte
  *
  * Return: pointer to the memoey area @s
  */

char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	for (; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
