#include "main.h"

/**
 * flip_bits - counts the number of bits to change
 * to get from one number to another
 * @n: long integer
 * @m: unsigned integer
 *
 * Return: number of bits to change
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
unsigned long int mk = 0;
unsigned long int index;
index = n ^ m;
while (index > 0)
{
if (index & 1)
{
mk++;
}
index >>= 1;
}
return (mk);
}
