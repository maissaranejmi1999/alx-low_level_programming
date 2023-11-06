#include "dog.h"

/**
 * init_dog - function
 * @d: struct vbl
 * @name: vbl
 * @age: vbl
 * @owner: vbl
*/

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
