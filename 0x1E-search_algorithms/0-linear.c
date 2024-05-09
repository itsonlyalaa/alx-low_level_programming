#include "search_algos.h"

/**
 * linear_search - searches for a value in an array
 * using linear search
 * @array: pointer to 1st element of array to serach
 * @size: number of elements
 * @value: value to search for
 *
 * Return: 1st index with 'value', or -1 'value' not found
 * or 'array' is NULL
*/

int linear_search(int *array, size_t size, int value)
{
size_t i;
int index = -1;

if (array == NULL)
{
return (index);
}

for (i = 0; i < size; i++)
{
printf("Value checked array[%lu] = [%i]\n", i, array[i]);
if (array[i] == value)
{
index = (int)i;
break;
}
}
return (index);
}
