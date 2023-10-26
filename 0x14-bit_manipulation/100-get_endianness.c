#include "main.h"

/**
 * get_endianness - Check the endianess
 *
 * Return: 0 if big endian , 1 if little endian
 */

int get_endianness(void)
{
int i = 2;
if (i & 1)
{
return (0);
}
return (1);
}
