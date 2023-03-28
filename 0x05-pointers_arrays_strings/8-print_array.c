#include "main.h"
#include <stdio.h>

/**
 * print_array - This function prints n element of an array of integers
 *
 * @a: parameter to be checked
 * @n: parameter to be checked
 *
 * Return: both a and n inputs
 */

void print_array(int *a, int n)
{
	int x;

	for (x = 0; x < n; x++)
	{
		if (x != n - 1)
		{
			printf("%d, ", a[x]);
		}
		else
		{
			printf("%d", a[x]);
		}
	}
	printf("\n");
}
