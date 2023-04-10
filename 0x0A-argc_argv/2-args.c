#include <stdio.h>

/**
  * main - This main function prints all recieved arguments
  *
  * @argc: argument count
  * @argv: argument vector
  *
  * Return: Always 0
  */

int main(int argc, char *argv[])
{
	int a;

	for (a = 0; a < argc; a++)
	{
		printf("%s\n", argv[a]);
	}
	return (0);
}
