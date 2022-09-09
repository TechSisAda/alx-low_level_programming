#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
* main - Entry point
*
* Return: Always 0 (Success)
*/
int main(void)
{
int ate;
for (ate = '0'; ate <= '9'; ate++)
{
putchar(ate);
if (ate != '9')
{
putchar(',');
putchar(' ');
}
}
putchar('\n');
return (0);
}
