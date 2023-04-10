#include <stdio.h>
#include <stdlib.h>

/**
  * main - This main function multiplies two numbers
  *
  * @argc: argument count
  * @argv: argument vector
  *
  * Return: 1 if error
  */

int main(int argc, char *argv[])
{
	int num_1, num_2, prod;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		num_1 = atoi(argv[1]);
		num_2 = atoi(argv[2]);
		prod = num_1 * num_2;
		printf("%d\n", prod);
	}
	return (0);
}
