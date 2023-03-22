#include <stdio.h>

/**
 * main - This program prints first 50 Fibonacci numbers
 *
 * Return: Always 0
 */

int main(void)
{
	int count;
	unsigned long fib_1 = 0, fib_2 = 1, sum;

	for (count = 0; count < 50; count++)
	{
		sum = fib_1 + fib_2;
		printf("%lu", sum);

		fib_1 = fib_2;
		fib_2 = sum;

		if (count == 49)
			printf("\n");
		else
			printf(", ");
	}

	return (0);
}
