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

			srand(time(0));
				n = rand() - RAND_MAX / 2;
				n = n % 10;
					if (n > 5)
						printf("%i and is greater than 5\n", n);
					if (n == 0)
						printf("%i and is 0\n", n);
					if (n < 6 && n != 0)
						printf("%i and is less than 6 and not 0\n", n);
					else
						printf("do not try this at home\n");
					return (0);
}
