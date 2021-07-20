#include <stdio.h>
#include "dog.h"

/**
 * init_dog -  function that initialize a variable of type struct dog
 * @d: pointer to my_dog
 * @name: name dog.
 * @age: age of the dog.
 * @owner: name owner.
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
if (d)
{
(*d).name = name;
(*d).age = age;
(*d).owner = owner;
}
}
