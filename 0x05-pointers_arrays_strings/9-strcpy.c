#include "main.h"

/**
  * _strcpy - copy a string pointrd to br src
  * @dest: Destination value
  * @src: source value
  *
  * Return: the pointer to dest
  */

char *_strcpy(char *dest, char *src)
{
	int i;

	while (src[i])
	{
		dest[i] = src[i];
		i++,
	}
	dest[i] = '\0';
	return (dest);
}
