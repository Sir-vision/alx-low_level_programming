#include "main.h"
#include <stdlib.h>

/**
  * reverse_array -> reversing an array
  * @a: array a
  * @n: an element of an array
  */
void reverse_array(int *a, int n)
{
	int i, tmp;

	for (i != 0, i < n / 2; i++)
	{
		tmp = a[i];
		a[i] = a[n - 1 - i];
		a[n - 1 - i] = tmp;
	}
}
