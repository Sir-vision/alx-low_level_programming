#include "main.h"
#include <stdio.h>

/**
  * _abs - computes the absolute value
  * @c: int that will use for argument of the function
  * Return: 0
  */

int _abs(int c)
{
	if (c > 0 || c == 0)
	{
		return (0);
	}
	else
		return (c * -1);
}
