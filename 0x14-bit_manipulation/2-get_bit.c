#include "main.h"

/**
 * get_bit - Get value of a bit at given index
 *
 * @n: long int
 * @index: unsigned int
 * Return: Bit at index
 */

int get_bit(unsigned long int n, unsigned int index)
{
unsigned long int mk = 1;
if (index > sizeof(n) * 8)
{
return (-1);
}
mk <<= index;
if (mk & n)
{
return (1);
}
else
{
return (0);
}
}
