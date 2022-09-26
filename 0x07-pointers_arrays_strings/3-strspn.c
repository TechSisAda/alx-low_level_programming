#include "main.h"
/**
 * _strspn - function gets the lenght of a prefix substring
 * @s: intial segment
 * @accept: input char to locate s
 * Return: number of bytes in s from accept.
 */
unsigned int _strspn(char *s, char *accept)
{
int i, j;
int c = 0;
for (i = 0; s[i] != '\0'; i++)
{
if (s[i] != 32)
{
for (j = 0; accept[j] != '\0'; j++)
{
if (s[i] == accept[j])
c++;
}
}
else
return (c);
}
return (c);
}
