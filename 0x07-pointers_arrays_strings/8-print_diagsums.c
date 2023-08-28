#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - Prints the sum of the two diagonals of a square matrix.
 * @a: The pointer to the square matrix.
 * @size: The size of the matrix.
 */
void print_diagsums(int *a, int size)
{
int diag1_sum = 0;
int diag2_sum = 0;
int row, col;

for (row = 0; row < size; row++)
{
for (col = 0; col < size; col++)
{
if (row == col)
{
diag1_sum += *(a + row * size + col); /* Sum of diagonal from top-left */
}
if (row + col == size - 1)
{
diag2_sum += *(a + row * size + col); /* Sum of diagonal from top-right */
}
}
}
printf("%d, %d\n", diag1_sum, diag2_sum);
}
