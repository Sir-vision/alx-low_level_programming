#include "main.h"

/**
  * _isalpha - function to check if c is lower case or upper
  * @c: is the int argument we will use for the function
  * Return: 0
  */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
		return (0);
}
