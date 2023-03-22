#include <stdio.h>

/**
 * main - This program finds and prints the sum of the even-valued terms
 *
 * Return: Always 0
 */

int main(void)
{
	int total_sum;
	unsigned long fib_1 = 0, fib_2 = 1, fib_sum;

	while (1)
	{
		fib_sum = fib_1 + fib_2;

		if (fib_sum > 4000000)
			break;

		if ((fib_sum % 2) == 0)
			total_sum += fib_sum;

		fib_1 = fib_2;
		fib_2 = fib_sum;
	}
	printf("%d\n", total_sum);

	return (0);
}
