#include <stdio.h>
#include "main.h"
/**
 * _strstr - function that locates a substring
 * @needle: substring to search for
 * @haystack: longer string to search from
 * Return: a pointer to begining of located substring.
 * or NULL if substring is not found.
 */
char *_strstr(char *haystack, char *needle)
{
int i;
int s = 0;
while (needle[s] != '\0')
s++;

while (*haystack)
{
for (i = 0; needle[i]; i++)
{
if (haystack[i] != needle[i])
break;
}
if (i != s)
haystack++;
else
return (haystack);
}
return (NULL);
}
