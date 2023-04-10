#include <stdio.h>
#include <stdlib.h>

/**
  * main - This main function adds positive numbers
  *
  * @argc: argument count
  * @argv: argument vector
  *
  * Return: 1 if error
  */

int main(int argc, char *argv[])
{
	int a;
	int sum = 0;

	if (argc == 1)
	{
		printf("0\n");
	}
	else
	{
		for (a = 1; a < argc; a++)
		{
			if (!atoi(argv[a]))
			{
				printf("Error\n");
				return (1);
			}
			else
			{
				sum += atoi(argv[a]);
			}
		}
		printf("%d\n", sum);
	}
	return (0);
}
