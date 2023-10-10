#include <dog.h>

/**
 * init-dog - initialises a variable, type struct dog
 * @d: dog struct
 * @name: dogs name
 * @age: dogs age
 * @owner: dog owners name
*/
void init_dog(struct dog *d, const char *name, float age, const char *owner)
{
	if (d)
	{
		d->name = strdup(name);
		d->age = age;
		d->owner = strdup(owner);
	}
}
