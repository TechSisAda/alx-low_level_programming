#include "main.h"
/*
* func prints alphabet in lower case x10
* Return 0
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
