#include "main.h"
/**
* times_table - prints 9 times table
* Description: function prints the 9 times table from 0
* Return: always 0.
*/
void times_table(void)
{
int a, b, product;
for (b = 0; b < 10; b++)
{
for (a = 0; a < 10; a++)
{
product = a * b;
if (a == 0)
{
_putchar(product + '0');
}
else if (product >= 10)
{
_putchar(' ');
_putchar(product / 10 + '0');
_putchar(product % 10 + '0');
}
else
{
_putchar(' ');
_putchar(' ');
_putchar(product + '0');
}
if (a != 9)
{
_putchar(',');
}
}
_putchar('\n');
}
}
