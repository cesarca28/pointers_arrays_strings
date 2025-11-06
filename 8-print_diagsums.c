#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - Prints the sum of the two diagonals of a square matrix
 * @a: pointer to the first element of the matrix (int *)
 * @size: the number of rows and columns in the square matrix
 *
 * Description: Calculates the sum of the main diagonal (from top-left
 * to bottom-right) and the secondary diagonal (from top-right to bottom-left)
 * of a square matrix, and prints both sums separated by a comma and a space.
 */
void print_diagsums(int *a, int size)
{
	int i;
	int sum1 = 0;
	int sum2 = 0;

	for (i = 0; i < size; i++)
	{
		sum1 += a[i * size + i];          /* main diagonal */
		sum2 += a[i * size + (size - 1 - i)]; /* secondary diagonal */
	}

	printf("%d, %d\n", sum1, sum2);
}
