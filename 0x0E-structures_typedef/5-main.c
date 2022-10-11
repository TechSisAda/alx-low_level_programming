#include <stdio.h>
#include "dog.h"

/**
 * main - check the code for students.
 *
 * Return: Always 0.
 */
int main(void)
{
dog_t *my_dog;

my_dog = new_dog("Miss", 3.5, "Ada");
printf("My name is %s, and I am %.1f :) - Woof!\n", my_dog->name, my_dog->age);
free_dog(my_dog);
return (0);
}
