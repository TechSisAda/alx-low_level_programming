#include "main.h"
#include <stdio.h>
/**
 * _strpbrk - function searches string for any set of bytes
 * @s: string to search
 * @accept: byte to search for 
 * Return: pointer to byte in s that matches accept
 * or NULL if no byte is found
 */
char *_strpbrk(char *s, char *accept)
{
int a;

while (*s)
{
for (a = 0; accept[a]; a++)
{
if (*s == accept[a])
{
return (s);
}
     
}
s++;
}
return (NULL);
}
