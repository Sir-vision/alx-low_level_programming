#include "main.h"
#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>

/**
  * main - print the name of the program
  * @argc: Count argument
  * @argv: Argument
  *
  * Return: Always zero
  */

int main(int argc, char *argv[])
{
	int sum = 0, i, j;

	if (argc == 1)
	{
		;
	}
	for (i = 1; argv[i]; i++)
	{
		for (j = 0; argv[i][j]; j++)
		{
			if (!isdigit(argv[i][j]))
			{
				printf("Error\n");
				return (1);
			}
		}
		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}
