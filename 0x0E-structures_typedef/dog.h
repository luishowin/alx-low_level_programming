#ifndef DOG_H
#define DOG_H

/**
 * struct dog - describes the dog
 * @name: dogs name
 * @age: dogs age
 * @owner: name of the dogs owner
*/

struct dog
{
    char *name;
    int *age;
    char *owner;
};

typedef struct dog dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner );
void print_dog(struct dog *d);
dog_t *new_dog(char *name, int age, char *owner);
void free_dog(dog_t *d);
#endif