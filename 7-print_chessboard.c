#include "main.h"

/**
 * print_chessboard - Prints the chessboard
 * @a: 2D array representing the chessboard (8x8)
 *
 * Description: Prints an 8x8 chessboard using the characters
 * stored in the array @a, followed by a newline after each row.
 */
void print_chessboard(char (*a)[8])
{
	int i, j;

	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
		{
			_putchar(a[i][j]);
		}
		_putchar('\n');
	}
}
