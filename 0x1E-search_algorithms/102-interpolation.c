#include "search_algos.h"

/**
 * interpolation_search - searches for a value in an  sorted array
 * using interpolation search
 * @array: pointer to 1st element of array to serach
 * @size: number of elements
 * @value: value to search for
 *
 * Return: 1st index with 'value', or -1 'value' not found
 * or 'array' is NULL
*/

int interpolation_search(int *array, size_t size, int value)
{
size_t high = size - 1;
size_t low, pos;

if (array == NULL)
{
return (-1);
}

while ((array[high] != array[low]) && (value >= array[low])
        && (value <= array[high]))
{
pos = low + (((double)(high - low) / (array[high] - array[low]))
             * (value - array[low]));
printf("Value checked array[%lu] = [%d]\n", pos, array[pos]);
if (array[pos] < value)
{
low = pos + 1;
}
else if (value < array[pos])
{
high = pos - 1;
}
else
{
return (pos);
}
}
if (value == array[low])
{
printf("Value checked array[%lu] = [%d]\n", low, array[low]);
return (low);
}
pos = low + (((double)(high - low) / (array[high] - array[low]))
             * (value - array[low]));
printf("Value checked array[%lu] is out of range\n", pos);
return (-1);
}
