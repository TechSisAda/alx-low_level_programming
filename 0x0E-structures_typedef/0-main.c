#include <stdio.h>
#include "dog.h"

/**
 * main - check the code for students.
 * Return: Always 0.
 */
int main(void)
{
struct dog my_dog;

my_dog.name = "Poppy";
my_dog.age = 4.8;
my_dog.owner = "Ada";
printf("My name is %s, and I am %.1f :) - Woof!\n", my_dog.name, my_dog.age);
return (0);
}
