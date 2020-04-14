// Filename: \\SourceXI083\Unit_4\U4Chap06\BUBSORT.CPP
// Demonstration of sorting an array using bubble sort method.
#include <iostream.h>
#include<conio.h>
bubsort()
{
	clrscr();
	int Num[100];
	int N, i, j, tmp;
	cout << "How many numbers you want to sort? ";
	cin >> N;
	cout << "Please enter " << N << " Values ... \n";
	for (i = 0; i < N; i++) {
		cout << "Enter number " << i+1 << ": ";
		cin >> Num[i];
	}
	for (i = 0; i < N; i++)
		for (j = 0; j < N-1; j++)
			if (Num[j] > Num[j+1]) {
				tmp = Num[j];
				Num[j] = Num[j + 1];
				Num[j + 1] = tmp;				
			}

	cout << "The sorted elements are :\n";
	for (i = 0; i < N; i++)
		cout << Num[i] << " ";
	return 0;
}