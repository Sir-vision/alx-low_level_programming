#include <stdio.h>
/**
 *main - Entry point
 *print sizes of int i, double d, char c
 *Return: Always 0 (Success)
 */
int main(void)
{
	int i;
	double d;
	char c;
	printf("The size of an int is: %lu.\n", (unsigned long)sizeof(i));
	printf("The size of an double is: %lu.\n", (unsigned long)sizeof(d));
			printf("The size of an c is: %lu.\n", (unsigned long)sizeof(c));
			return (0);
}
