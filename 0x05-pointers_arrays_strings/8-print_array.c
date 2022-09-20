#include "main.h"
#include <stdio.h>

/**
 * print_array - prints first n elements of array
 * @a: int array to display from
 * @n: number of element to display
 *
 * Return: void
 */
void print_array(int *a, int n)
{
	int i = 0;

	for (; i < n; i++)
	{
		printf("%d", *(a + i));
		if (i != (n-1))
			printf(", ");

	}
	printf("\n");
}
