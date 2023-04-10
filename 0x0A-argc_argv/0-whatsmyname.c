#include <stdio.h>

/**
  * main - This main function prints its own name
  *
  * @argc: argument count
  * @argv: argument vector
  *
  * Return: Always 0
  */

int main(int argc, char *argv[])
{
	(void) argc;

	printf("%s\n", argv[0]);
	return (0);
}