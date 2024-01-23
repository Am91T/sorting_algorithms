#include "sort.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

/**
 * bubble_sort - function that uses bubble sort to sort an array
 * @array: array of numbers to sort
 * @size: size of array
 */

void bubble_sort(int *array, size_t size)
{
	size_t i;
	int j, temp, check;

	for (i = 0; i < (size - 1); i++)
	{
		check = 0;
		temp = array[i + 1];
		j = i;
		while (j >= 0 && temp < array[j])
		{
			array[j + 1] = array[j];
			j--;
		}
		array[j + 1] = temp;
		print_array(array, size);
	}
}
