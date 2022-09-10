#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
  *C programme that assign a number to a variable
  *main - Entry point
  *Return zero; (success)
  */
int main(void)
{
		int n;
		
			srand(time(0));
				n = rand() - RAND_MAX / 2;
					printf("n is %d\n",n);
					if (n > 0)
						printf("%d is positive\n", n);
					else if (n == 0)
						printf("%d is 0\n", n);
					else if (n < 0)
						printf("%d is negative\n", n);
					else
						printf("Print don't be confused\n");
					return (0);
}
