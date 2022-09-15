#include "main.h"
/**
 * print_triangle -  a function that prints a triangle, followed by a new line.
 * @size: An input integer
 * Return: Always 0
 */
void print_triangle(int size)
{
int n, row = 0, column, spaces;
n = size;
if  (n < 1)
{
_putchar('\n');
}
for (; row < n; row++)
{
for (spaces = 0; spaces < n - row - 1; spaces++)
{
_putchar(' ');
}
for (column = 0; column <= row; column++)
{
_putchar('#');
}
_putchar('\n');
}
}
