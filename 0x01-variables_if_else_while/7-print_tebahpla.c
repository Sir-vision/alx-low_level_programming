#include <stdio.h>

/**
  *main - Entry point
  *Description: prints lowercase alphabet in reverse, followed by a new line
  *Return: Always zero
  */

int main(void)
{
	char letter;

	for (letter = 'z'; letter >= 'a'; letter--)
		putchar (letter);
	putchar ('\n');
	return (0);
}
