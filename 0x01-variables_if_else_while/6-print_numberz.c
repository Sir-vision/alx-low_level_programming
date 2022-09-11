#include <stdio.h>

/**
  *main - Entry point
  *Description: prints all single digit numbers of base 10 starting from 0
  *Return: Always zero
  */

int main(void)
{
	int num;

	for (num = 0; num < 10; num++)
		putchar ((num % 10) + '0');
	putchar ('\n');
	return (0);
}
