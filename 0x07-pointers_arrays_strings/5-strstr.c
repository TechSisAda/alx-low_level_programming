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
char *startn = needle, *starth = haystack;

while (*haystack)
{
starth = haystack;
needle = startn;
while (*haystack == *needle)
{
haystack++;
needle++;
}

if (*needle == '\0')
return (haystack);
haystack = starth + 1;
}
return (NULL);
}
