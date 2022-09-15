#include "main.h"
/**
* _isdigit - Check if paramter c represents an digit.
* @c: an input integer
* Return: Return 1 if it is a digit otherwise return 0.
*/
int _isdigit(int c)
{
char i = '0';
int isdigit = 0;

for (; i <= '9'; i++)
{
if (i == c)
{
isdigit = 1;
break;
}
}

return (isdigit);
}