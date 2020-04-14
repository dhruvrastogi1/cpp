// Filename: \\SourceXI083\Unit_4\U4Chap06\INDPROD.CPP
// Demonstration of multidimensional array
#include <iostream.h>
void indprod()
{
	int array[4][4];
	int i, j;
	// Calculating the product of indices
	for (i = 0; i < 4; i++)
		for (j = 0; j < 4; j++)
			array[i][j] = i * j;
	// Displaying the array in row, and column
	for (i = 0; i < 4; i++)
	{
		for (j = 0; j < 4; j++)
			cout << array[i][j] << "	";
		cout << "\n";
	}
	
}
