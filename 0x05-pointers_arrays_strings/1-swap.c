#include "main.h"

/**
  *swap_int - This function swaps the value of two integers
  *
  *@a: parameter to be swaped
  *@b: parameter to be swaped
  */

void swap_int(int *a, int *b)
{
	int m;

	m = *a;
	*a = *b;
	*b = m;
}
