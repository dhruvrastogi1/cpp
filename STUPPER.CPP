// Filename: \\SourceXI083\Unit_4\U4Chap07\STUPPER.CPP
// Program to convert a string to uppercase
#include <iostream.h>
#include <stdio.h>
#include <conio.h>
void stupper() {
	char string[60];
	int i = 0;
	clrscr();
	cout << "Enter any string : ";
	gets(string);
	while (string[i] != '\0') {
		// If character is between a and z (97 is ASCII value of a and 122 is of z)
		if (string[i] >= 97 && string[i] <= 123)
			string[i]-=32; // Add 32 to its ASCII value (to get its lowercase equivalent
		i++;
	}
	cout << "The uppercase string is : " << string;
}
