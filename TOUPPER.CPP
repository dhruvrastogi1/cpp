// Filename: \\SourceXI083\Unit_4\U4Chap04\TOUPPER.CPP
// Demonstration for the use of toupper(character) function
#include <iostream.h>
#include <ctype.h>
#include <stdio.h>
void toupper()
{
	int opt;
	cout << "Please enter any character : ";
	opt = getchar();
	fflush(stdin);
	if isalpha(opt)
		if (islower(opt))
		{
			cout << "The converted letter is ... " ;
			putchar(toupper(opt));
		}
		else
			cout << "This is not a lowercase letter.";
	else
		cout << "The character is not an alphabet.";
}
