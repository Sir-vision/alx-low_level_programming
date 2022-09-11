#include <stdio.h>

/**
  *main - Entry point
  *Description: print lowercase alphabet
  *print all the letters except q and e
  *Return: Always zero
  */

int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
		if (ch != 'q' && ch != 'e')
		putchar (ch);
	putchar ('\n');
	return (0);
}
