#include "lists.h"

void __attribute__((constructor)) hare(void);
/**
 * hare - Prints a string before
 * main function is executes.
 */
void hare(void)
{
printf("You're beat! and yet, you must allow,\n"
"I bore my house upon my back!\n");
}
