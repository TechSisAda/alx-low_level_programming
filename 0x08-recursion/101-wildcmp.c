#include "main.h"
/**
 * wildcmp - A function that compares two strings
 * @s1: First input string
 * @s2: Second input string
 * Return: 1 if strings identical and 0 in otherwise.
 */
int wildcmp(char *s1, char *s2)
{
if (*s2 == '*')
{
iterate_wild(&s2);
s2 = postfix_match(s1, s2);
}
if (*s2 == '\0')
return (1);
if (*s1 != *s2)
return (0);
return (wildcmp(++s1, ++s2));
}
