#include "search_algos.h"

/**
 * print_array - prints an array
 * @array: a pointer to the array to print
 * @size: size of the array to print
 *
 * Return: void
 */
void print_array(int *array, size_t size)
{
	size_t i;

	printf("Searching in array: ");
	for (i = 0; i < size; i++)
	{
		if (i)
			printf(", ");
		printf("%d", array[i]);
	}
	printf("\n");
}

/**
 * binary_search_sub_array - searches for a value in a sorted sub-array of
 * integers using the Binary search algorithm
 * @array: a pointer to the first element of the array to search in
 * @low: the lower index of the sub-array to search in
 * @high: the upper index of the sub-array to search in
 * @value: the value to search for
 *
 * Return: the index where value is located, or -1 on failure
 */
int binary_search_sub_array(int *array, size_t low, size_t high, int value)
{
	size_t m;

	if (low > high)
		return (-1);
	print_array(array + low, high + 1 - low);
	m = (high + low) / 2;
	if (array[m] == value)
		return (m);
	if (array[m] > value)
		return (binary_search_sub_array(array, low, m, value));
	return (binary_search_sub_array(array, m + 1, high, value));
}


/**
 * binary_search - searches for a value in a sorted array of integers using the
 * Binary search algorithm
 * @array: a pointer to the first element of the array to search in
 * @size: the number of elements in array
 * @value: the value to search for
 *
 * Return: the index where value is located, or -1 on failure
 */
int binary_search(int *array, size_t size, int value)
{
	if (!array)
		return (-1);
	return (binary_search_sub_array(array, 0, size - 1, value));
}
