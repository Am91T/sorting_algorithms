#include "sort.h"
#include <stdio.h>
#include <stdlib.h>

/**
* bubble_sort - function that uses bubble sort to sort an array
* @array: array of numbers to sort
* @size: size of array
*/

void bubble_sort(int *array, size_t size)
{
	int swapped, temp;

	size_t i, j;

	for (i = 0; i < size - 1; i++)
	{
		swapped = 0;

	for (j = 0; j < size - i - 1; j++)
	{
		if (array[j] > array[j + 1])
		{
			temp = array[j];
			array[j] = array[j + 1];
			array[j + 1] = temp;
			swapped = 1;
		}
		print_array(array, size);
	}

		if (!swapped)
			break;
	}
}
