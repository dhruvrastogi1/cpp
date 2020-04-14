// Filename: \\SourceXI083\Unit_4\U4Chap03\GETPUT.CPP
#include <iostream.h>
#include <stdio.h>
#include <graphics.h>
void getput()
{
	char line_char[80];
	cleardevice();
	cout << "Input a string: ";
	gets(line_char);	// Inputs a character line through the standard input device
	puts(line_char);	// Prints the above line into the standard output device
	
}
