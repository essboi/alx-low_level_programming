#include "main.h"

/**
  * sqrt_recursion_checker - This function checks the actual recursion
  *
  * @n: number parameter to calculate the square root
  * @x: iterating factor
  *
  * Return: Resulting sqaure root
  */

int sqrt_recursion_checker(int n, int x)
{
	if (x * x > n)
	{
		return (-1);
	}
	else if (x * x == n)
	{
		return (x);
	}
	else
	{
		return (sqrt_recursion_checker(n, x + 1));
	}
}

/**
  * _sqrt_recursion - This function returns the natural
  * square root of a number
  *
  * @n: number paameter
  *
  * Return: Resulting sqaure root
  */

int _sqrt_recursion(int n)
{
	if (n == 0)
	{
		return (0);
	}
	else if (n < 0)
	{
		return (-1);
	}
	else
	{
		return (sqrt_recursion_checker(n, 0));
	}
}
