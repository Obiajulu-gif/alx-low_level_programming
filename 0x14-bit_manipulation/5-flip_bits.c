#include "main.h"

/**
 * flip_bits -  number of bits you would need to
 *  flip to get from one number to another.
 * @n: first unsigned integer to be flip
 * @m: second unsigned integer to be flip
 * Return:  returns the number of bits you would
 * need to flip to get from one number to another:
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
unsigned int count, xor;

xor = n ^ m;
count = 0;
while (xor > 0)
{
count += xor & 1;
xor >>= 1;
}
return (count);
}
