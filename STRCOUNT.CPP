// Filename: \\SourceXI083\Unit_4\U4Chap03\STRCOUNT.CPP
/* Program to find number of blanks, tabs and newline in the given input */
#include<iostream.h>
#include<stdio.h>
void strcount()
{
	int nb, nt, nl;
	char c;
	nb = nt = nl =0;
	while (( c = getchar()) !='\0'  )
	{
		if ( c == ' ')
			 ++nb;
		if ( c == '\t')
			++nt;
		if ( c == '\n')
			++nl;
	}
	cout<<"\n\t Number of blanks space => "<<nb;
	cout<<"\n\t Number of tabs         => "<<nt;
	cout<<"\n\t Number of newline      => "<<nb;
}