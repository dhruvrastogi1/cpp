// Filename: \\SourceXI083\Unit_4\U4Chap01\EVENODD.CPP
// Program to find whether a given number is even or odd.
#include <iostream.h>
#include <conio.h>
void evenodd()
{
	int num;
	cout << "Enter any number ";
	cin >> num;
	if ((num % 2) == 0)
		cout << "Number is even";
	else
		cout << "Number is odd";
}