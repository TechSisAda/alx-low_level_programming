#include "main.h"
#include <stdlib.h>
/**
 * _strchr - function locates char in a string
 * @s: input string to search
 * @c: input character to locate into s
 * Return: pointer to c in s.
 * Return NULL if character is not found.
 */
char *_strchr(char *s, char c)
{
while (*s)
{
if (*s != c)
s++;
else
return (s);
}
if (c == '\0')
return (s);
return (NULL);
}
