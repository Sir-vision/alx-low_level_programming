#include "main.h"
#include <stdio.h>

/**
  * main - print the name of the program
  * @argc: count argument
  * @argv: Arguments
  *
  * Return: Always 0 (success)
  */

int main(int argc, char *argv[])
{
	(void) argv;

	printf("%d\n", argc - 1);
	return (0);
}
