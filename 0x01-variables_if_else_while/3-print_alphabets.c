#include <stdio.h>

/**
  *main - Entry point
  *Description: print uppercase and lowercas alphabets
  *Return: Always zero
  */

int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
		putchar (ch);
	for (ch = 'A'; ch <= 'Z'; ch++)
		putchar (ch);
	putchar ('\n');
	return (0);
}
