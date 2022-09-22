#include "main.h"
/**
* _strncat - function concatenates n strings
* @dest: parameter pointer to a char
* @src: parameter pointer to a char
* @n: int parameter
* Return: pointer of resulting string dest.
*/
char *_strncat(char *dest, char *src, int n)
{
int a;
int b;

a = 0;

for (b = 0; b < 1000; b++)
{
if (dest[b] == '\0')
{
break;
}
a++;
}

for (b = 0; src[b] != '\0' && b < n; b++)
{
dest[a + b] = src[b];
}
dest[a + b] = '\0';
return (dest);
}
