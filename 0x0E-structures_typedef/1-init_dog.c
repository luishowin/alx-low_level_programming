#include <dog.h>

/*
 * init-dog - initialises a variable, type struct dog
 * @d: dog struct
 * @name: dog's name
 * @age: dogs age
 * @owner: dog owners name
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
