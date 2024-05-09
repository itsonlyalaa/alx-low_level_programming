#include "search_algos.h"

/**
 * binary_search - searches for a value in an array
 * using binary search
 * @array: pointer to 1st element of array to serach
 * @size: number of elements
 * @value: value to search for
 *
 * Return: 1st index with 'value', or -1 'value' not found
 * or 'array' is NULL
*/

int binary_search(int *array, size_t size, int value)
{
size_t i, lft, ryt, mid;
if (array == NULL)
{
return (-1);
}

lft = 0;
ryt = size - 1;

while (lft <= ryt)
{
mid = (lft + ryt) / 2;
printf("Searching in array: ");
for (i = lft; i <= ryt; i++)
{
printf("%i%s", array[i], i == ryt ? "\n" : ",");
}

if (array[mid] < value)
{
lft = mid + 1;
}
else if (array[mid] > value)
{
ryt = mid - 1;
}
else
{
return ((int)mid);
}
}
return (-1);
}
