// Filename: \\SourceXI083\Unit_4\U4Chap03\COUNTCH.CPP
// Demonstrating get() and put() function
#include <iostream.h>
#include <graphics.h>
#include<stdio.h>
void countch( )
{
	int count = 0,i=0;
	char ch[20];
	cleardevice();	// clears screen
	cout << "Enter any text " << endl;
	gets(ch);	// input character
	while (ch[i] != '\0')
	{
		cout<<ch; // output character
		count++;
		i++; //increment character count
		//ch= cin.get(); // input character
	}
	// output character count
	cout << endl << "Number of characters - " << count << endl;
}
