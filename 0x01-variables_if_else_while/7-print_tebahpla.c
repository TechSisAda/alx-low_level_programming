#include <stdio.h>
/**
* main - Entry point
*
* Return: Always 0 (Success)
*/
int main(void)
{
int lower;
lower = 122;
while (lower >= 97)
{
putchar(lower);
lower--;
}
putchar('\n');
return (0);
}
