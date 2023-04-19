#include "function_pointers.h"

/**
 * array_iterator - a function executes a function given
 * as a parameter on each element of an array
 *
 * @array: array
 * @size: size of array
 * @action: function pointer
 *
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	/* end -> pointer hold the last thing of the array */
	/* array || &array --> first of array ; size - 1 -> start from 0 */
	int *end = array + size - 1;

	if (array && size && action)
		while (array <= end)
			action(*array++);
}
