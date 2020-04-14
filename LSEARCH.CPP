
// Filename: \\SourceXI083\Unit_4\U4Chap06\LSEARCH.CPP
// Search an element and its position in an array
#include <iostream.h>
#include <conio.h>
// Linear search function
void linearSearch(int Num[11], int N, int SearchVal) {
	int ctr = 0, pos = -1;
	while (ctr <= N) {
		if (Num[ctr] == SearchVal) {
			pos = ctr + 1;
			break;	// Terminate the loop
		}
		else
			ctr = ctr + 1;
	}
	if (pos >= 0)
		cout << "The search value " << SearchVal << "’s position is: " << pos;
	else
		cout << "The search value does not found";
}
lsearch() {
	clrscr();
	int N, Num[11], i, SearchVal;
	cout << "Enter total numbers for an array: ";
	cin >> N;
	cout << "Please enter " << N << " Values ... \n";
	for (i = 0; i < N; i++)
	{
		cout << "Enter number " << i+1 << ": ";
		cin >> Num[i];
	}
	cout << "Enter the search value: ";
	cin >> SearchVal;
	linearSearch(Num, N, SearchVal);
	return 0;
}
