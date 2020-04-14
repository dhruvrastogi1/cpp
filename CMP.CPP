// Filename: \\SourceXI083\Unit_4\U4Chap07\CMP.CPP
// Demonstration for the use of strcmp(s1, s2) function
// using a password method
#include <iostream.h>
#include <string.h>
#include<conio.h>
void cmp() {
	clrscr();
	char mpass[7] = "Master", npass[7];
	int ctr=0;
	cout << "Enter your password name :";
	cin >> npass;
	ctr = strcmp(mpass, npass);
	if (ctr == 0)
		cout << "Correct password!!! ";
	else
		cout << "Wrong password!!! ";
}
