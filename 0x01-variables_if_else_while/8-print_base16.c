#include <stdio.h>
/**
* main - Entry point
*
* Return: Always 0 (Success)
*/
int main(void)
{
int ate;
for (ate = 48; ate <= 57; ate++)
{
putchar(ate);
}
for (ate = 97; ate <= 102; ate++)
{
putchar(ate);
}
putchar('\n');
return (0);
}
