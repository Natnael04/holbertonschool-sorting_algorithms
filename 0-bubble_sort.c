#include "sort.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * bubble_sort - sorts an array of integers in ascending order 
 *
 * @array: an array of integer
 * @size: the size of an array
 * Return: always 0
 */
void bubble_sort(int *array, size_t size)
{
	size_t i, j;

	if (array == NULL)
	{
		return;
	}
	for (i = 0; i < size - 1; i++)
	{
		for (j = 0; j < size - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
				int temp = array[j];

				array[j] = array[j + 1];
				array[j + 1] = temp;
				print_array(array, size);
			}
		}
	}
}
