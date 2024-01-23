#include "sort.h"
/**
 *bubble_sort - Function that sorts an array of ints
 *using bubble sort algorithm
 *
 *@array: array of ints
 *@size: size of array
 *
 */
void bubble_sort(int *array, size_t size)
{
	int TMEP;
	size_t X, Y;

	if (!array || !size)
		return;

	X = 0;
	while (X < size)
	{
		for (Y = 0; Y < size - 1; Y++)
		{
			if (array[Y] > array[Y + 1])
			{
				TMEP = array[Y];
				array[Y] = array[Y + 1];
				array[Y + 1] = TMEP;
				print_array(array, size);
			}
		}
		X++;
	}
}
