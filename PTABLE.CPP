// Filename: \\SourceXI083\Unit_4\U4Chap02\PTABLE.CPP
// Demonstration of variable declaration inside a for loop.
#include <iostream.h>
int ptable() {
	cout << "The result is: " << endl;
	for (int i = 1, j =15; i <= 10; i++)
	{
		cout << j << " * " << i << " = " << j*i << endl;
	}
	return 0;
}
