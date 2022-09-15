#include "main.h"
#include <stdio.h>
/**
* isupper - checks for uppercase character
* Description: function checks for uppercase characters
* @c: input character
* Return: 1 if c is uppercase
*/
int _isupper(int c)
{
char upper = 'A';
int isupper = 0;
for (; upper <= 'Z'; upper++)
{
if (c == upper)
{
isupper = 1;
break;
}
}
return (isupper);
}
