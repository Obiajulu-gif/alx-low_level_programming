#include "main.h"
/**
 * get_bit - get the value of a bit at a given index
 * @n: number whose bit value we want to check
 * @index: represent the position of the bit we want to check
 * Return: value of a bit at a given index
 */
int get_bit(unsigned long int n, unsigned int index)
{
unsigned long int mask;
mask = 1 << index;

return ((n & mask) ? 1 : 0);
}
