#include "dog.h"

/**
 * new_dog - function that creates a new dog.
 * @name: dog's name.
 * @age: it's age.
 * @owner: it's owner.
 * Return: pointer of type dog_t.
*/

dog_t *new_dog(char *name, float age, char *owner)
{
	int i = 0, s_name = 0, s_owner = 0;
	dog_t *new_dog;

	if (name == NULL)
		name = '\0';
	if (owner == NULL)
		owner = '\0';

	while (name[s_name])
		s_name++;
	while (owner[s_owner])
		s_owner++;

	new_dog = malloc(sizeof(dog_t));

	if (new_dog == NULL)
		return (NULL);

	new_dog->name = malloc(s_name * sizeof(char));
	new_dog->owner = malloc(s_owner * sizeof(char));

	if (new_dog->name == NULL || new_dog->owner == NULL)
		return (NULL);

	while (i < s_name)
	{
		(new_dog->name)[i] = name[i];
		i++;
	}

	i = 0;

	while (i < s_owner)
	{
		(new_dog->owner)[i] = owner[i];
		i++;
	}

	new_dog->age = age;
	return (new_dog);
}
