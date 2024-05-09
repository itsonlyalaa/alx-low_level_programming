#include "search_algos.h"
#include <math.h>

/**
 * jump_search - searches for a value in an array
 * of integers using jump search
 * @array: pointer to 1st element of array to serach
 * @size: number of elements
 * @value: value to search for
 *
 * Return: 1st index with 'value', or -1 'value' not found
 * or 'array' is NULL
*/

int jump_search(int *array, size_t size, int value)
{
	int index, y, z, prv;

	if (array == NULL || size == 0)
		return (-1);

	y = (int)sqrt((double)size);
	z = 0;
	prv = index = 0;

	do {
		printf("Value checked array[%d] = [%d]\n", index, array[index]);

		if (array[index] == value)
			return (index);
		z++;
		prv = index;
		index = z * y;
	} while (index < (int)size && array[index] < value);

	printf("Value found between indexes [%d] and [%d]\n", prv, index);

	for (; prv <= index && prv < (int)size; prv++)
	{
		printf("Value checked array[%d] = [%d]\n", prv, array[prv]);
		if (array[prv] == value)
			return (prv);
	}

	return (-1);
}
