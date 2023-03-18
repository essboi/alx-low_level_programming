#include <stdio.h>

/**
 * main - main function
 *
 * Return: Always 0
 */

int main(void)
{
	char abc;

	for (abc = 'z'; abc >= 'a'; abc--)
		putchar(abc);
	putchar('\n');
	return (0);
}
