#include "function_pointers.h"

/**
 * int_index - searches for integer in array.
 * @array: The array to search on.
 * @size: Number of element in the array.
 * @cmp: The function to be called on the search.
 *
 * Return: The index of the first matched element
 * If no element found -1.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || size <= 0 || cmp == NULL)
		return (-1);
	for (i = 0; i < size; i++)
		if (cmp(array[i]) > 0)
			return (i);
	return (-1);
}
