#ifndef _DOG_H
#define _DOG_H

/**
 * struct dog - new type struct dog.
 * @name: name dog.
 * @age: age of the dog.
 * @owner: name owner.
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

typedef struct dog  dog_t;

void print_dog(struct dog *d);
void init_dog(struct dog *d, char *name, float age, char *owner);

#endif /*#ifndef _DOG_H*/
