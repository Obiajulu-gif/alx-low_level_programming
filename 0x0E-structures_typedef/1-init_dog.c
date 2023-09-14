/* Define the struct first before assigning */
#include "dog.h"
struct dog /**
	* init_dog - inits a variable of
	*type dog
	*@d: dog identification
	*@name: name of dog
	*@age: age of dog
	*@owner: owner's name
	*/
{
char *name;
float age;
char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner)
{
d->name = name;
d->age = age;
d->owner = owner;
}
