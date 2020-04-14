// Filename: \\SourceXI083\Unit_4\U4Chap01\LTHREE.CPP
#include <iostream.h>
lthree()
{
	int fn, sn, tn;	// Declare three different variable
	cout << "What is the first number? ";
	cin >> fn;
	cout << "What is the second number? ";
	cin >> sn;
	cout << "What is the third number? ";
	cin >> tn;
	if ((fn > sn) && (fn > tn))
	{
		cout << "The bigger value is " << fn;
	}
	else
		if ((sn > tn) && (sn > fn))
		{
			cout << "The bigger value is " << sn;
		}
		else
		{
			cout << "The bigger value is " << tn;
		}
	return 0;
}
