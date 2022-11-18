#include "main.h"

/**
 * _strcpy - Copies information from each element
 * @dest: destination file
 * @src: source file
 * Return: array
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}

	dest[i] = src[i];
	return (dest);
}
