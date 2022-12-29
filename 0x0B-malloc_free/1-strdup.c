#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
  * _strdup - duplicate string
  * @str: array of elements
  * Return: 0
  */

char *_strdup(char *str)
{
	char *ptr;
	int len, i;

	if (str == NULL)
	{
		return (NULL);
	}
	for (len = 0; str[len]; len++)
		;

	ptr = malloc(sizeof(char) * (len + 1));

	if (!ptr)
	{
		return (NULL);
	}
	for (i = 0; i < len; i++)
	{
		ptr[i] = str[i];
	}
	ptr[i] = '\0';
	return (ptr);
}
