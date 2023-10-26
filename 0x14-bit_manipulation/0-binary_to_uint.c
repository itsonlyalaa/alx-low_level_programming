#include "main.h"

/**
 * binary_to_uint - function that converts a binary number to an unsigned int.
 * @b: pointer to string of binary number
 *
 * Return: unsigned int with decimal value of binary number, or else if error 0
 */
unsigned int binary_to_uint(const char *b)
{
signed int i = 0, nm = 0;
if (!b)
{
return (0);
}
while (b[i] != '\0')
{
if (b[i] != '0' && b[i] != '1')
{
return (0);
}
nm <<= 1;
if (b[i] & 1)
{
nm = nm + 1;
}
i = i + 1;
}
return (nm);
}
