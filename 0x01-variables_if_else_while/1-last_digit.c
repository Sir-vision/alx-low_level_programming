#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
  *main - Entry point
  *Description: print the last digit of the number stored in the variable n
  *Return: Always zero
  */
int main(void)
{
		int n;
		int i;

			srand(time(0));
				n = rand() - RAND_MAX / 2;
				i = n % 10;
					if (n > 5)
						printf("Last digit of %d is %i and is greater than 5\n", n, i);
					else if (n < 6 && n != 0)
						printf("Last digit of %d is %i and is less than 6 and not 0\n", n, i);
					else
						printf("Last digit of %d is %i and is 0\n", n, i);
					return (0);
}