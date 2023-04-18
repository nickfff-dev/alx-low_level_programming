#ifndef DOG_H
#define DOG_H

/**
* struct dog - properties of a dog
* @name: name of the dog
* @age: age of the dog
* @owner: owner of the dog
* Description:  A struct that holds the properties of a dog
*/
struct dog
{
	char *name;
	float age;
	char *owner;

};
/**
* dog_t - typedef for struct dog
*/
typedef struct dog dog_t;
void init_dog (struct dog *d, char *name, float age, char *owner);

#endif
