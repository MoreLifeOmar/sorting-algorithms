#include "sort.h"

/**
 * bubble_sort - a function that sorts an
 * array of integers in ascending order using the Bubble sort
 * @array: Array to sort
 * @size: size of the array
 * Return: void
 */

void bubble_sort(int *array, size_t size)
{
	size_t i;
	int tmp, done;

	if (size < 2)
		return;
	do {
		done = 0;
		for (i = 1; i < size; i++)
		{
			if (array[i - 1] > array[i])
			{
				tmp = array[i];
				array[i] = array[i - 1];
				array[i - 1] = tmp;
				print_array(array, size);
				done = 1;
			}
		}
	} while (done != 0);

}
