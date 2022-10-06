#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
  * _strlen - count array
  * @s: array of elements
  * Return: 0
  */

int _strlen(char *s)
{
	unsigned int i;

	i = 0;
	while (s[i] != '\0') /* count characters of string */
	{
		i++;
	}
	return (i);

	/**
	  * _strcpy - copy arrays
	  *src: array of elements
	  * @dest: dest array
	  * Return: dest
	  */

	char *_strcpy(char *dest, char *src)
	{
		int i = 0;

		while (src[i] != '\0')
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';

		return (dest);
	}

	/**
	  * _strdup - array of point of string
	  * @ str: array of element
	  * Return: pointer
	  */

	char *_strdup(chr *str)
	{
		char *dst;
	unsigned int size;

	if (str == 0)
	{
		return (NULL);
	}
	size = _strlen(str) + 1;
	dst = (char *) malloc(size *sizeof(char));
	if (dst == 0)
	{
		return (NULL);
	}
		_strcpy(dst, str);
		return (dst);
	}
}
