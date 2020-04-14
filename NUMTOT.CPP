// Filename: \\SourceXI083\Unit_4\U4Chap06\NUMTOT.CPP
// Find totals of 8 input values from the user.
#include <iostream.h>
void numtot() {
	int num[8], i;
	int total = 0;
	cout << "Please enter 8 numbers ... \n";
	for (i = 0; i < 8; i++) {
		cin >> num[i];
		total += num[i];
	}
	cout << "The total of the numbers is " << total << "\n";
}
