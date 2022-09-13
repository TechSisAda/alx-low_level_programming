#include "main.h"
/**
* print_alphabet_x10 - function
* Description: function uses _putchar function to print
* alphabet in lowercase 10 times
* Return: Nothing.
*/
void print_alphabet_x10(void)
{
int s = 0;
while (s < 10)
{
char t = 'a';
while (t <= 'z')
{
_putchar(t);
t++;
}
_putchar('\n');
s++;
}
}
