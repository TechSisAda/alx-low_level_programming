#include "main.h"
/**
* print_to_98 - prints all natural numbers to 98
* Description: function prints all natural numbers from n to 98
*@n: starting integer
*@a: input integer
* Return: always 0.
*/
void print_to_98(int n)
{
int a = 0;
if (n > 98)
{
for (a = n; a >= 98; a--)
{
if (a != n)
{
printf(", ");
}
printf("%d", a);
}
}
else
{
for (a = n; a <= 98 ; a++)
{
if (a != n)
{
printf(", ");
}
printf("%d", a);
}
}
putchar('\n');
}
