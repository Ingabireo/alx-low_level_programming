#include "main.h"
/**
 * _memset - fills memory with  aconstanft byte.
 * @s: source string
 * @b: the constant byte for filiing
 * @n: length of buffer
 * Return: new strin g.
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;
	while (i < n)
	{
		*(s + i) = b;
		i++;
	}
	return (s);
}	
