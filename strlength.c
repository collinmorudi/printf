#include "main.h"
/**
 * _strlen - prints length string in integer
 * @s: string passed to function
 * Return: a
 */
int _strlen(char *s)
{
	int i = 0;

	while (*(s + i))
		i++;

	return (i);
}
