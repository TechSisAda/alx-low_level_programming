#include "main.h"
/**
 * _memcpy - function copies from one memory area to another
 * @dest: memory area destination to copy
 * @src: memory area to copy from
 * @n: number of bytes
 * Return: pointer to @dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *go = dest;

	while (n--)
	{
		*dest = *src;
		src++;
		dest++;
	}
	return (go);
}
