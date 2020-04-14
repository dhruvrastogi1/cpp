// Filename: \\SourceXI083\Unit_4\U4Chap07\VDIGIT.CPP
// Program to count number of vowels and digits in a given string
#include<iostream.h>
#include<graphics.h>
#include<stdio.h>
void vdigit() {
	char  str[50];
	int i, vc = 0, dc = 0;
	cleardevice();
	cout << "\n\t Enter a string-> ";
	gets(str);
	i = 0;
	while (str[i] != '\0') {
		if ((str[i] == 'a') || (str[i] == 'e') || (str[i] == 'i') || (str[i] == 'o') || (str[i] == 'u'))
			vc++;
		if ((str[i] >= '0') && (str[i]<='9'))
			dc++;
		i++;
	}
	cout << "\n\t Number of vowels are : " << vc;
	cout << "\n\t Number of digits are : " << dc;
	
}