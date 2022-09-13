#include "main.h"
/**
* print_alphabet: It prints the alphabet in lowercase followed next by a new line
* Return 0
*/
void print_alphabet(void)
{
char low;
for (low = 'a'; low <= 'z'; low++)
_putchar(low);
_putchar('\n');
}