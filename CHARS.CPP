// Filename: \\SourceXI083\Unit_4\U4Chap03\CHARS.CPP
// Demonstration for getchar() and putchar() function
// Write a program to input any character in lowercase and print its uppercase letter.
#include <iostream.h>
#include <stdio.h>
void chars()
{
	char char_val;
	cout << "Enter a charcter: ";
	char_val = getchar();
	cout << "\nThe capital letter is: ";
	putchar(char_val-32);	// Subtract 32 for uppercase letter,
		// as the difference between lowercase and uppercase
	
}
