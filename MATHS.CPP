// Filename: \\SourceXI083\Unit_4\U4Chap04\MATHS.CPP
// Demonstration for the use of mathematical functions
#include <iostream.h>
#include <math.h>
#include <graphics.h>
void maths()
{
	cleardevice();
	float num1 = -6789.876;
	float x = 13, y = 3;
	cout << "The absolute value of " << num1 << " is : " << abs(num1);
	cout << "\nThe nearest integer of " << num1 << " is : " << ceil(num1);
	cout << "\nThe absolute value of a floating-point number " << num1 << " is : " << fabs(num1);
	cout << "\nThe nearest round down value of " << num1 << " is : " << floor(num1);
	cout << "\nThe remainder value is : " << fmod(x, y);
	cout << "\nThe 13 raised to the power 3 is : " << pow(x,y);
	cout << "\nThe square root value of 100 is : " << sqrt(100);
}
