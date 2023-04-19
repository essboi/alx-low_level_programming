#include "function_pointers.h"

/**
  * int_index - This function searches for an integer
  *
  * @array: Array parameter
  * @size: Array element size
  * @cmp: Pointer to a function
  *
  * Return: Always 0
  */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || size <= 0 || cmp == NULL)
	{
		return (-1);
	}

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
			return (i);
	}
	return (-1);
}
