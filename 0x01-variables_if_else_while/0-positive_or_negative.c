#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* more headers goes there */
/* main - Entry point */
/* print n */
/* betty style doc for function main goes there */
/* return : zero (success) */
int main(void)
{
		int n;

			srand(time(0));
				n = rand() - RAND_MAX / 2;
					if (n > 0)
						printf("is positive\n");
					if (n == 0)
						printf("is zero\n");
					if (n < 0)
						printf("is negative\n");
					return (0);
}
