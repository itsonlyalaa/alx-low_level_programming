#include "main.h"

/**
 * binary_to_uint - function that converts a binary number to an unsigned int.
 * @b: pointer to string containing binary number
 *
 * Return: unsigned int with decimal value of binary number, or else if error 0
 */
unsigned int binary_to_uint(const char *b)
{
int i;
unsigned int nm = 0;

if (!b)
{
return (0);
for (i = 0; b[i] != '\0'; i++)
{
if (b[i] != '0' && b[i] != '1')
{
return (0);
}
}
for (i = 0; b[i] != '\0'; i++)
{
nm <<= 1;
if (b[i] == '1')
{
nm = nm + 1;
}
}
}
return (nm);
}
