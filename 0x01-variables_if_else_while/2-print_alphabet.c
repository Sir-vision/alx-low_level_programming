#include <stdio.h>

/**
  *main - Entry point
  *Description: print alphabets in lower case
  *Return: Always zero
  */

int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
		putchar (ch);
	putchar ('\n');
	return (0);
}
