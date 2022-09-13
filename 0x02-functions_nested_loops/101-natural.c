#include <stdio.h>
/**
 * 101-natural - print the mulptiples of 3,5
 * Description: function prints the sum of multiples of 3, 5
 * Return: always 0.
 */
int main(void)
{
int i = 0;
int m3 = 3;
int m5 = 5;
int sum = 0;
int lim = 1024;
while (i == 0)
{
if (m3 < lim)
{
sum += m3;
m3 += 3;
}
if (m5 < lim && (m5 % 3) != 0)
{
sum += m5;
m5 += 5;
}
else if (m5 % 3 == 0)
{
m5 += 5;
}
if (m3 >= lim && m5 >= lim)
{
i = 1;
}
}
printf("%d\n", sum);
return (0);
}
