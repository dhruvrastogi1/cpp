#include<iostream.h>
#include<stdio.h>
#include<conio.h>
#include<dos.h>
#include<time.h>
#include"stlower.cpp"
#include"stupper.cpp"
#include"lsearch.cpp"
#include"evenodd.cpp"
#include"qroot.cpp"
#include"bubsort.cpp"
#include"maxmin.cpp"
#include"indprod.cpp"
#include"vdigit.cpp"
#include"cmp.cpp"
#include"palind.cpp"
#include"numtot.cpp"
#include"lthree.cpp"
#include"sdiff.cpp"
#include"acalc.cpp"
#include"ptable.cpp"
#include"fact10.cpp"
#include"revwhile.cpp"
#include"mcalc.cpp"
#include"dtobin.cpp"
#include"countch.cpp"
#include"convert.cpp"
#include"strcount.cpp"
#include"chars.cpp"
#include"getput.cpp"
#include"toupper.cpp"
#include"maths.cpp"
#include"trifun.cpp"
#include"logfun.cpp"
#include<string.h>
#include<math.h>
#include<graphics.h>
void main()
{
start:
int gd= DETECT,gm;
initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
cleardevice();
int a,b,c,d,e,f,g,x,z;
int hehe,op;
op=rand() %10;
setbkcolor(op);
rectangle(190,120,450,270);
gotoxy(28,10);
cout<<"1..BRANCHING IN C++";gotoxy(28,11);cout<<"2..LOOPING IN C++"<<endl;gotoxy(28,12);cout<<"3..DEVICE AND CHARACTER"<<endl;gotoxy(28,13);cout<<"4..FUNCTIONS IN C++"<<endl;gotoxy(28,14);cout<<"5..ARRAYS IN C++"<<endl;gotoxy(28,15);cout<<"6..STRING HANDLING"<<endl;gotoxy(28,16);
cout<<"ENTER THE CHAPTER NUMBER : ";
cin>>x;
if(x==1)
{
op=rand() %10;
setbkcolor(op);
cleardevice();
gotoxy(1,11);
cout<<"1..PROGRAM TO PRINT WHETHER THE NO IS ODD OR EVEN"<<endl;
cout <<"2..PROAGRAM TO FIND THE ROOTS OF A QUADRATIC EQUATION"<<endl;               cout <<"3..PROAGRAM TO FIND LARGEST BETWEEN THREE INTEGERS USING CONDITIONAL OPERATORS"<<endl;
cout<<"4..PROAGRAM TO INPUT TWO NUMBERS AND FIND THEIR SUM AND DIFFERSNCE USING SWITCH STATEMENT"<<endl;
cout<<"5..PROAGRAM TO FIND AREA OF CIRCLE , RECTANGLE , SQUARE AND CIRCUMFERENCE OF CIRCLE"<<endl;
cout<<"ENTER THE PROAGRAM NO YOU WANT TO DISPLAY"<<endl;
cin>>a;
cleardevice();
gotoxy(1,1);

if(a==1)
{
op=rand() %10;
setbkcolor(op);
cout<<"#include<iostream.h>"<<endl;
cout<<"#include<conio.h>"<<endl;
cout<<"void main()"<<endl;
cout<<"{"<<endl<<"int num;"<<endl<<"cout<<\"enter any number\”;”<<endl";                         cout<<"cin>>num;"<<endl<<cout<<"if((num%2)==0)"<<endl<<"cout<<\"number is even\";"<<endl;                               cout<<"else"<<endl<<"cout<<\"number is odd\";"<<endl<<"}";
getch();
cout<<"\n\n\npress 1 to run program ";
 cin>>hehe;
 if(hehe==1)
 {
 cleardevice();
 gotoxy(1,1);
 evenodd();
 }
}
if(a==2)
{
op=rand() %10;
setbkcolor(op);
cout<<"#include<iostream.h>"<<endl<<"#include<conio.h>"<<endl;
cout<<"#include<math.h>"<<endl<<"main()"<<endl<<"{"<<endl;
cout<<"int a,b,c,r1,r2,d;"<<endl<<"clrscr();"<<endl;
cout<<"cout<<\"\\n\\t   Enter the values of a,b and c:\";"<<endl;                                   cout<<"cin>>a>>b>>c;"<<endl;
cout<<"d=b*b-4*a*c;"<<endl<<"if(d<0)"<<endl;
cout<<"cout<<\"\\n\\t Roots are imaginary \";"<<endl;
cout<<"if(d>=0)"<<endl<<"{"<<endl<<"r1=(-b+sqrt(d))/(2*a);"<<endl;
cout<<"r2=(-b-sqrt(d))/(2*a);"<<endl<<"if(d==0)"<<endl;
cout<<"cout<<\"\\n\\t Roots are equal \";"<<endl;
cout<<"cout<<\"\\n\\t First root is \"<<r1;"<<endl;
cout<<"cout<<\"\\n\\t Second root is \"<<r2;"<<endl;
cout<<"}"<<endl<<"return 0;"<<endl<<"}";
getch();
cout<<"\n\n\npress 1 to run program  ";
 cin>>hehe;
 if(hehe==1)
 {
 cleardevice();
 gotoxy(1,1);
 qroot();
 }
}
if(a==3)
{
op=rand() %10;
setbkcolor(op);
cout<<"#include<iostream.h>"<<endl<<"main()"<<endl;
cout<<"{"<<endl<<"int a,b,c,maxN;"<<endl;
cout<<"cout<<\"\\n\\t Enter the value of a:\";" <<endl;cout<<"cin>>a;"<<endl;
cout<<"cout<<\"\\n\\t Enter the value of b:\";"<<endl; cout<<"cin>>b;"<<endl<<"cout<<\"\\n\\t Enter the value of c:\";"<<endl; cout<<"cin>>c;"<<endl<<"maxN=(a>0)?(a>c?:c):(b>c?b:c);"<<endl;
cout<<"cout<<endl<<\"\\n\\t Maximum number is \"<<maxN;"<<endl;
cout<<"return 0"<<endl<<"}";
getch();
cout<<"\n\n\npress 1 to run program  ";
 cin>>hehe;
{ if(hehe==1)
 {
 cleardevice();
 gotoxy(1,1);
 lthree();
 }}
}}
if(a==4)
{
op=rand() %10;
setbkcolor(op);
cout<<"#include<iostream.h>\nmain()\n{\nint  num1,num2,opt,sum,diff;\ncout<<\"enter first      no.\";\ncin>>num1;\ncout<<\"enter second no.\";\ncin>>num2;\ncout<<\"1-addition\";\ncout<<\"\\n2-difference\";\ncout<<\"\\n\\nenter choice from above\";\ncin>>opt;\nswitch(opt)\n{\ncase 1:\n   sum=num1+num2;\nbreak;\ncase2:\nif(num1>num2)\ndiff=num1-num2;\nelse\ndiff=num2-num1;\nbreak;\ndefault:\ncout<<\"\\n invalid option selected\";\n}";
getch();
cout<<"\nif(opt==1)\ncout<<\"the sum of\"<<num1<<\"and\"<<num2<<\"is =\"<<sum;\nelse\nif(opt==2)\ncout<<\"the diff between\"<<num1<<\"and\"<<num2<<\"is =\"<<diff;\nreturn 0;\n}\n";
getch();
cout<<"\n\n\npress 1 to run program ";
 cin>>hehe;{
 if(hehe==1)
 {
 cleardevice();
 gotoxy(1,1);
 sdiff();
 } }
}
if(a==5)
{
op=rand() %10;
setbkcolor(op);
cout<<"#include<iostream.h>\n#include<conio.h>\nmain()\n{\nint  a, r, l, c, b, ch;\nclrscr();\ncout << \"\\n\\t1. For area of circle\";\ncout << \"\\n\\t2. For area of rectangle\";\ncout << \"\\n\\t3. For circumference of circle\";\ncout << \"\\n\\t4. For area of square\";\ncout << \"\\n\\tEnter your choice \";\ncin >> ch;\nswitch (ch)\n{\ncase 1:	cout << \"\\n\\tEnter the radius of the circle \";\ncin >> r;\na = 3.14 * r * r;\ncout << \"\\tArea of circle is => \" << a;n\break;\ncase 2:	cout << \"\\n\\tEnter the length \";\n";
getch();
cleardevice();
gotoxy(1,1);
cout<<"cin >> l;\ncout << \"\\n\\tEnter the breadth \";\ncin >> b;\na = l * b;\ncout << \"\\tArea of rectangle is => \" << a;\nbreak;\ncase 3:	cout << \"\\n\\tEnter the radius of the circle \";\ncin >> r;\nc = 2 * 3.14 * r;\ncout << \"\\tCircumference of circle is => \" << c;\nbreak;\ncase 4:	cout << \"\\n\\tEnter the side of square \";\ncin >> l;\na = l * l;\ncout << \"\\tArea of square is => \" << a;\n}\nreturn 0;\n}";
getch();
cout<<"\n\n\npress 1 to run program ";
 cin>>hehe;
 if(hehe==1)
 {
 cleardevice();
 gotoxy(1,1);
 acalc();
 }
}
else if(x==2)
{

op=rand() %10;
setbkcolor(op);
cleardevice();
gotoxy(1,11);
cout<<"1..PROGRAM TO PRINT THE TABLE OF A NO. USING DATA TYPE DECLARATION INSIDE A LOOP\n"<<"2..PROGRAM TO PRINT FACTORIAL OF ALL NO. B/W 1 AND 10\n"<<"3..PROGRAM TO PRINT REVERSE ORDER OF ANY NUMBER USING WHILE LOOP\n"<<"4..TO MAKE A SIMPLE CALCULATOR\n"<<"5..CONVERT DECIMAl NO. TO BINARY FORM\n";
cin>>b;
cleardevice();
gotoxy(1,1);

if(b==1)
{
op=rand() %10;
setbkcolor(op);
cout<<"#include <iostream.h>\nint main() {\ncout << \"The result is: \" << endl;\nfor (int i = 1, j =15; i <= 10; i++)\n{\ncout << j << \" * \" << i << \" = \" << j*i << endl;\n}\nreturn 0;\n}";
cout<<"\n\n\npress 1 to run program ";
 cin>>hehe;
 if(hehe==1)
 {
 cleardevice();
 gotoxy(1,1);
 ptable();
 }
}
if(b==2)
{
op=rand() %10;
setbkcolor(op);
cout<<"#include <iostream.h>\n"<<"main()\n{"<<"\nint i;"<<"int limit = 10;\n"<<"long factorial = 1;\n"<<"for (i = 1; i <= limit; i++) {\n"<<"factorial = 1;\n"<<"for (int factor = 2; factor <= i; factor++) {\n"<<"factorial *= factor;\n"<<"}\ncout << \"\\n\" << i << \"! is: \" <<(double)factorial;\n}\nreturn 0;\n}";
cout<<"\n\n\npress 1 to run program  ";
 cin>>hehe;
 if(hehe==1)
 {
 cleardevice();
 gotoxy(1,1);
 fact10();
}}
if(b==3)
{op=rand() %10;
setbkcolor(op);
cout<<"#include <iostream.h>\n"<<"int main()\n"<<"{\nlong int value, r_digit;\nvalue = 0;\nwhile (value <= 0) {\ncout << \"Enter the number to be reversed. \";\ncin >> value;\nif (value <= 0)\ncout << \"The number must be positive \n\";\n} \n cout << \"The reverse of number \" << value << \" is : \";\nwhile (value != 0) {\nr_digit = value % 10;\ncout << r_digit;\nvalue = value / 10;\n}\nreturn 0;\n}";
cout<<"\n\n\npress 1 to run program  ";
 cin>>hehe;
 if(hehe==1)
 {
 cleardevice();
 gotoxy(1,1);
 revwhile();
}
}
if(b==4)
{op=rand() %10;
setbkcolor(op);
cout<<"#include <iostream.h>\n#include<conio.h>\n#include <stdio.h>\nvoid main()\n{\nclrscr();\nchar choi = \'y\';\nlong a, b, sum, diff, pro;\ndouble  div;\nchar ch;\nwhile ((choi == \'y\') || (choi == \'Y\'))\n {\nclrscr();\ncout << \"\\n\\t\\t This program is to perform simple calculator \";\ncout << \"\\n\\n\\t\\t\\t  For Addition Press +\";\ncout << \"\\n\\n\\t\\t\\t  For Subtraction 	-\";\ncout << \"\\n\\n\\t\\t\\t  For Multiplication *\";\ncout << \"\\n\\n\\t\\t\\t  For Division 	/\"; \ncout << \"\\n\\n\\t\\t\\t  Enter your choice \";\ncin >> ch;\nclrscr();\nswitch (ch)\n";
getch();
cout<<"{\ncase \'+\':\ncout << \"\\n\\t\\t Enter first number  \";\ncin >> a;\ncout << \"\\n\\t\\t Enter second number \";\ncin >> b;\nsum = a + b;\ncout << \"\\n\\t\\tThe sum is \" << sum;\nbreak;\ncase \'-\':\ncout << \"\\n\\t\\t Enter the number to be subtracted \";\ncin >> a;\ncout << \"\\n\\t\\tEnter the number from which it is to be subtracted \";\ncin >> b;\ndiff = b - a;\ncout << \"\\n\\t\\tThe difference is \" << diff;\nbreak;\ncase \'*\':\ncout << \"\\n\\t\\t Enter the first number \";\ncin >> a;\ncout << \"\\n\\t\\t Enter the second number \";\ncin >> b;\npro = a * b;\n";
getch();
cout<<"cout << \"\\n\\t\\tThe product is  \" << pro;\nbreak;\ncase \'/\':\ncout << \"\\n\\t\\t Enter the number to be divided \";\ncin >> a;\ncout << \"\\n\\t\\t Enter the divisor \";\ncin >> b;\ndiv = a/b;\ncout << \"\\n\\t\\tThe result of division is \" << div;\nbreak;\ndefault :\ncout << \"\\n\\n\\n\\t\\t Enter again from the given choice \";\n}\ncout << \"\\n\\n\\n\\n\\n\\nEnter y to continue......\";\ncin >> choi;\n}\n}\n";
getch();
cout<<"\n\n\npress 1 to run program  ";
 cin>>hehe;
 if(hehe==1)
 {
 cleardevice();
 gotoxy(1,1);
 mcalc();
}

}
if(b==5)
{op=rand() %10;
setbkcolor(op);
cleardevice();
gotoxy(1,1);
cout<<"#include <iostream.h>\n#include <conio.h>\nmain()\n{\nint n, r, col, row;\ncout << \"Enter the value of n \";\ncin >> n;\ncol = 40;\nrow = 6;\nwhile (n != 0) {\nr = n % 2;\nn = n / 2;\ngotoxy (col, row);\ncout << r;\ncol--;\n}\nreturn 0;\n}";
getch();
cout<<"\n\n\npress 1 to run program  ";
 cin>>hehe;
 if(hehe==1)
 {
 cleardevice();
 gotoxy(1,1);
 dtobin();
}
}
}
else if(x==3)
{op=rand() %10;
setbkcolor(op);
cleardevice();
gotoxy(1,11);
cout<<"1..TO FIND NO. OF CHARACTERS IN A STRING\n"<<"2..TO CONVERT LOWER CASE TO UPPER CASE\n"<<"3..TO COUNT NO. OF BLANKS,TABS,AND NEW LINES IN A GIVEN INPUT\n"<<"4..USAGE OF GETS() AND PUTS()\n";
cin>>c;
cleardevice();
gotoxy(1,1);

if(c==1)
{op=rand() %10;
setbkcolor(op);
cout<<"#include <iostream.h>\n#include <conio.h>\nvoid main( )\n{\nint count = 0;\nchar ch;\nclrscr();	// clears screen\ncout << \"Enter any text \" << endl;\nch = cin.get();	// input character\nwhile (ch != \'\\n\')\n{\ncout.put(ch); // output character\n count++; //increment character count\nch = cin.get(); // input character\n}\n// output character count\ncout << endl << \"Number of characters - \" << count << endl;\n}\n ";
cout<<"\n\n\npress 1 to run program  ";
 cin>>hehe;
 if(hehe==1)
 {
 cleardevice();
 gotoxy(1,1);
 countch();
}

}
if(c==2)
{op=rand() %10;
setbkcolor(op);
cout<<"#include <iostream.h>\n#include <stdio.h>\nmain()\n{\nchar char_val;\ncout << \"Enter a charcter: \";\nchar_val = getchar();\ncout << \"\\nThe capital letter is: \";\nputchar(char_val-32);	// Subtract 32 for uppercase letter,\n// as the difference between lowercase and uppercase\nreturn 0;\n}";
cout<<"\n\n\npress 1 to run program  ";
 cin>>hehe;
 if(hehe==1)
 {
 cleardevice();
 gotoxy(1,1);
 chars();
}

}
if(c==3)
{op=rand() %10;
setbkcolor(op);
cout<<"#include<iostream.h> \n#include<stdio.h>\nvoid main()\n{\nint nb, nt, nl; \nchar c;\nnb = nt = nl =0;\nwhile (( c = getchar()) != EOF )\n{\nif ( c == \' \')\n ++nb;\nif ( c == \'\\t\')\n++nt;\nif ( c == \'\\n\')\n++nl; \n}\ncout<<\"\\n\\t Number of blanks space => \"<<nb;\ncout<<\"\\n\\t Number of tabs         => \"<<nt;\ncout<<\"\\n\\t Number of newline      => \"<<nb;\n}";
cout<<"\n\n\npress 1 to run program  ";
 cin>>hehe;
 if(hehe==1)
 {
 cleardevice();
 gotoxy(1,1);
 strcount();
}

}
if(c==4)
{op=rand() %10;
setbkcolor(op);
cout<<"#include <iostream.h>\n#include <stdio.h>\n#include <conio.h>\nmain()\n{\nchar gets_char[80];\nclrscr();\ncout << \"Input a string using gets() : \";\ngets(gets_char);	// Inputs a character line through the standard input device\ncout << \"\\nOutput using puts() : \";\nputs(gets_char);	// Print the gets() string\ncout << \"End of the Output : \";\ncout << \"Demo completed.\";\nreturn 0; \n}";
cout<<"\n\n\npress 1 to run program  ";
 cin>>hehe;
 if(hehe==1)
 {
 cleardevice();
 gotoxy(1,1);
 getput();
}

}}
else if(x==4)
{op=rand() %10;
setbkcolor(op);
cleardevice();
gotoxy(1,1);
cout<<"1..MATHAMATICAL FUNCTIONS\n"<<"2..TRIGONOMETRIC FUNCTIONS\n"<<"3..LOGARITHMIC AND EXPONENTIAL FUNCTION\n"<<"4..USE OF TOLOWER() AND TOUPPER()\n"<<"5..DATATYPE CONVERSION FUNCTION\n\n";
cin>>d;
cleardevice();
gotoxy(1,11);
if(d==1)
{op=rand() %10;
setbkcolor(op);
cout<<"#include <iostream.h>\n#include <math.h>\n#include <conio.h>\nvoid main()\n{\nclrscr();\nfloat num1 = -6789.876;\nfloat x = 13, y = 3;\ncout << \"The absolute value of \" << num1 << \" is : \" << abs(num1);\ncout << \"\\nThe nearest integer of \" << num1 << \" is : \" << ceil(num1);\ncout << \"\\nThe absolute value of a floating-point number \" << num1 << \" is : \" << fabs(num1);\ncout << \"\\nThe nearest round down value of \" << num1 << \" is : \" << floor(num1);\ncout << \"\\nThe remainder value is : \" << fmod(x, y);\ncout << \"\\nThe 13 raised to the power 3 is : \" << pow(x,y);\ncout << \"\\nThe square root value of 100 is : \" << sqrt(100);\n}";
cout<<"\n\n\npress 1 to run program  ";
 cin>>hehe;
 if(hehe==1)
 {
 cleardevice();
 gotoxy(1,1);
 maths();
}

}
if(d==2)
{op=rand() %10;
setbkcolor(op);
cout<<"#include <iostream.h>\n#include <math.h>\nvoid main()\n{\nint x = 90;\ncout << \"The cosine of angle 90 degree is : \" << cos(x);\ncout << \"\\nThe sine of angle 90 degree is : \" << sin(x);\ncout << \"\\nThe tangent of angle 90 degree is : \" << tan(x);\n}";
cout<<"\n\n\npress 1 to run program  ";
 cin>>hehe;
 if(hehe==1)
 {
 cleardevice();
 gotoxy(1,1);
 trifun();
}

}
if(d==3)
{op=rand() %10;
setbkcolor(op);
cout<<"#include <iostream.h>\n#include <math.h>\nvoid main()\n{\nint x = 1;\ncout << \"The natural logarithm of 10 is : \" << exp(x);\ncout << \"\\nThe natural logarithm of 10 is : \" << log(x);\ncout << \"\\nThe base-10 logarithm of 10 is : \" << log10(x);\n}";
cout<<"\n\n\npress 1 to run program  ";
 cin>>hehe;
 if(hehe==1)
 {
 cleardevice();
 gotoxy(1,1);
 logfun();
}

}
if(d==4)
{op=rand() %10;
setbkcolor(op);
cout<<"#include <iostream.h>\n#include <conio.h>\n#include <stdio.h>\n#include <ctype.h>\nmain()\n{\nclrscr();\nint opt;\ncout << \"Please enter any character : \";\nopt = getchar();\nfflush(stdin);\nif isalpha(opt)\nif (isupper(opt))\n{\ncout << \"The converted letter is ... \" ;\nputchar(tolower(opt));\n}\nelse\ncout << \"This is not an uppercase letter. \";\nelse\ncout << \"The character is not an alphabet.\";\nif isalpha(opt)\nif (islower(opt))";
getch();
cleardevice();
gotoxy(1,1);
cout<<"\n{\ncout << \"The converted letter is ... \" ;\nputchar(toupper(opt));\n}\nelse\ncout << \"This is not a lowercase letter.\";\nelse\ncout << \"The character is not an alphabet.\";\nreturn 0;\n}";
getch();
cout<<"\n\n\npress 1 to run program  ";
 cin>>hehe;
 if(hehe==1)
 {
 cleardevice();
 gotoxy(1,1);
 toupper();
}

}
if(d==5)
{op=rand() %10;
setbkcolor(op);
cleardevice();
gotoxy(1,1);
cout<<"#include <iostream.h>\n#include <stdlib.h>\n#include <string.h>\n#include <conio.h>\nvoid main()\n{\nclrscr();\nint n1; // To store an integer value\nlong int n2; // To store a long integer value\nint num = 12345;\nlong int num1 = 987654321;\nchar str1[] = \"12345.67\";\nchar str2[] = \"98765432\";\nchar string1[25], strn[25];;\nn1 = atoi(str1) + 100; 		// adding 100 after converting\nn2 = atol(str2) + 2000; 	// adding 2000 after converting\nitoa(num, string1, 10); 	// Convert an integer into string\nltoa(num1, strn, 10); 		// Convert a long integer into string\ncout << \"String = \" << str1 << \" and new integer is : \" << n1 << endl;\ncout << \"String = \" << str2 << \" and new integer is :\" << n2 << endl;\ncout << \"Integer = \" << num << \" and string is : \" << string1 << endl;\ncout << \"Long Integer = \" << num1 << \" and string is : \" << strn << endl;\n}";
cout<<"\n\n\npress 1 to run program  ";
 cin>>hehe;
 if(hehe==1)
 {
 cleardevice();
 gotoxy(1,1);
 convert();
}

}
}
else if(x==5)
{op=rand() %10;
setbkcolor(op);
cleardevice();
gotoxy(1,11);
cout<<"1..PROAGRAM TO PRINT THE SUM OF 8 NUMBERS\n"<<"2..TO SEARCH A PARTICULAR VALUE IN AN ARRAY \n"<<"3..TO ARRANGE ALL THE NUMBERS IN ASCENDING ORDER\n"<<"4..TO FIND MINIMUM AND MAXIMUM VALKUE IN AN ARRAY \n"<<"5..TO INPUT DATA INTO 3*3 ARRAY AND DISPLAY WITH ROW AN COLUMN FORMAT \n";
cin>>e;
cleardevice();
gotoxy(1,1);
if(e==1)
{cout<<"#include <iostream.h>\nvoid main()\n{\nint num[8], i;\nint total = 0;\ncout << \"Please enter 8 numbers ... \\n\";\nfor (i = 0; i < 8; i++)\n {\ncin >> num[i];\ntotal += num[i];\n}\ncout << \"The total of the numbers is \" << total << \".\\n\";\n}";
cout<<"\n\n\npress 1 to run program  ";
 cin>>hehe;
 if(hehe==1)
 {
 cleardevice();
 gotoxy(1,1);
 numtot();
}

}
if(e==2)
{op=rand() %10;
setbkcolor(op);
cout<<"#include <iostream.h>\n#include <conio.h>\n// Linear search function\nvoid linearSearch(int Num[11], int N, int SearchVal)\n {\nint ctr = 0, pos = -1;\nwhile (ctr <= N)\n {\nif (Num[ctr] == SearchVal)\n {\npos = ctr + 1;\nbreak;	// Terminate the loop\n}\nelse\nctr = ctr + 1;\n}\nif (pos >= 0)\ncout << \"The search value \" << SearchVal << \"’s position is: \" << pos;\nelse\ncout << \"The search value does not found\";\n}\nmain()\n{\n";
getch();
cleardevice();
gotoxy(1,1);
cout<<"clrscr();\nint N, Num[11], i, SearchVal;\ncout << \"Enter total numbers for an array: \";\ncin >> N;\ncout << \"Please enter \" << N << \" Values ... \\n\";\nfor (i = 0; i < N; i++)\n{\ncout << \"Enter number \" << i+1 << \": \";\ncin >> Num[i];\n}\ncout << \"Enter the search value: \";\ncin >> SearchVal;\nlinearSearch(Num, N, SearchVal);\nreturn 0;\n}";
getch();
cout<<"\n\n\npress 1 to run program  ";
 cin>>hehe;
 if(hehe==1)
 {
 cleardevice();
 gotoxy(1,1);
 lsearch();
}

}
if(e==3)
{op=rand() %10;
setbkcolor(op);
cout<<"#include <iostream.h>\n#include<conio.h>\nmain()\n{\nclrscr();\nint Num[100];\nint N, i, j, tmp;\ncout << \"How many numbers you want to sort? \";\ncin >> N;\ncout << \"Please enter \" << N << \" Values ... \\n\";\nfor (i = 0; i < N; i++)\n {\ncout << \"Enter number \" << i+1 << \": \";\ncin >> Num[i];\n}\nfor (i = 0; i < N; i++)\nfor (j = 0; j < N-1; j++)\nif (Num[j] > Num[j+1])\n {\ntmp = Num[j];\nNum[j] = Num[j + 1];\nNum[j + 1] = tmp;\n}\ncout << \"The sorted elements are :\\n\";\nfor (i = 0; i < N; i++)\ncout << Num[i] << \" \";\nreturn 0;\n}";
cout<<"\n\n\npress 1 to run program  ";
 cin>>hehe;
 if(hehe==1)
 {
 cleardevice();
 gotoxy(1,1);
 bubsort();
}

}
if(e==4)
{op=rand() %10;
setbkcolor(op);
cout<<"#include <iostream.h>\n#include <conio.h>\nint main()\n {\nint num[100], min, max, i, size;\nclrscr();\ncout << \"Enter the size of your array ... \";\ncin >> size;\ncout << \"Please enter the Values ... \\n\";\nfor (i = 0; i < size; i++)\ncin >> num[i];\nmax = num[0];	// Initialize the default value to max and min\nmin = num[0];\nfor (i = 0; i < size; i++)\n {\nif (num[i] > max)\nmax = num[i];\nif (num[i] < min)\nmin = num[i];\n}\ncout << \"The maximum value in the list is \" << max << endl;\ncout << \"The minimum value in the list is \" << min << endl;\nreturn 0;\n}";
cout<<"\n\n\npress 1 to run program  ";
 cin>>hehe;
 if(hehe==1)
 {
 cleardevice();
 gotoxy(1,1);
 maxmin();
}

}
if(e==5)
{op=rand() %10;
setbkcolor(op);
cout<<"#include <iostream.h>\nmain()\n {\nint num[4][4];\nint i, j;\n// Input data into array\ncout << \"Enter the num values : \\n\";\nfor (i = 0; i < 3; i++)\n {\nfor (j = 0; j < 3; j++)\ncin >> num[i][j];\n}\n// Displaying num values\ncout << \"\\nThe array is : \\n\";\nfor (i = 0; i < 3; i++)\n {\nfor (j = 0; j < 3; j++)\ncout << num[i][j] << \"	\";\ncout << \"\\n\";\n}\nreturn 0;\n}";
cout<<"\n\n\npress 1 to run program  ";
 cin>>hehe;
 if(hehe==1)
 {
 cleardevice();
 gotoxy(1,1);
 indprod();
}

}
}
else if(x==6)
{op=rand() %10;
setbkcolor(op);
cleardevice();
gotoxy(1,1);
cout<<"1..PROGRAM TO FIND THE NUMBER OF VOWELS ,CONSONANTS ,DIGITS AND OTHER CHARACTER IN A STRING\n"<<"2..PASSWORD PROAGRAM\n"<<"3..PROGRAM TO CHECK WHETHER A STRING IS PALINDROME OR NOT\n"<<"4..CONVERT A STRING TO LOWERCASE\n"<<"5..CONVERT A STRING TO UPPERCASE\n";
cin>>f;
cleardevice();
gotoxy(1,11);
if(f==1)
{op=rand() %10;
setbkcolor(op);
cout<<"#include <iostream.h>\n#include <conio.h>\n#include <ctype.h>\n#include <stdio.h>\nvoid main()\n {\nchar str[80];\nint i, vc= 0, dc = 0, ot = 0;\nclrscr();\ncout << \"\\n\\tEnter any string –> \";\ngets(str);\ni = 0;\nwhile (str[i] != \'\\0\')\n {\nstr[i] = tolower(str[i]);\nif (((str[i] == \'a\')) || ((str[i] == \'e\')) || ((str[i] == \'o\')) || ((str[i] == \'u\')))\nvc++;\nelse\nif ((str[i] >= \'0\') && (str[i] <= \'9\'))\ndc++;\nelse\not++;\ni++;\n}\ncout << \"\\n\\tNumber of vowels are : \" << vc;\ncout << \"\\n\\tNumber of digits are : \" << dc;\ncout <<\"\\n\\tNumber of other characters are : \" << ot;\n}";
cout<<"\n\n\npress 1 to run program  ";
 cin>>hehe;
 if(hehe==1)
 {
 cleardevice();
 gotoxy(1,1);
 vdigit();
}

}
if(f==2)
{op=rand() %10;
setbkcolor(op);
cout<<"#include <iostream.h>\n#include <string.h>\nvoid main()\n {\nchar mpass[7] = \"Master\", npass[7];\nint ctr=0;\ncout << \"Enter your password name :\";\ncin >> npass;\nctr = strcmp(mpass, npass);\nif (ctr == 0)\ncout << \"Correct password!!! \";\nelse\ncout << \"Wrong password!!! \";\n}";
cout<<"\n\n\npress 1 to run program  ";
 cin>>hehe;
 if(hehe==1)
 {
 cleardevice();
 gotoxy(1,1);
 cmp();
}

}
if(f==3)
{op=rand() %10;
setbkcolor(op);
cout<<"#include <iostream.h>\n#include <stdio.h>\n#include <string.h>\n#include <conio.h>\nvoid main()\n {\nclrscr();\nchar string1[20], string2[20];\ncout <<  \"Enter any word or string : \";\ngets(string1);\nstrcpy(string2, string1);\ncout << \"Reverse of string is : \" << strrev(string2);\nif (strcmp(string1, string2) == 0)\ncout << \"\\n\" << string1 << \" is a palindrome\\n\";\nelse\ncout << \"\\n\" << string1 << \" is not a palindrome\\n\";\n}";
cout<<"\n\n\npress 1 to run program  ";
 cin>>hehe;
 if(hehe==1)
 {
 cleardevice();
 gotoxy(1,1);
 palind();
}

}
if(f==4)
{op=rand() %10;
setbkcolor(op);
cout<<"#include <iostream.h>\n#include <stdio.h>\n#include <conio.h>\nvoid main()\n {\nchar string[60];\nint i = 0;\nclrscr();\ncout << \"Enter any string : \";\ngets(string);\nwhile (string[i] != \'\\0\')\n {\n// If character is between A and Z (65 is ASCII value of A and 90 is of Z)\nif (string[i] >= 65 && string[i] <= 90)\nstring[i]+=32; // Add 32 to its ASCII value (to get its lowercase equivalent\ni++;\n}\ncout << \"The lowercase string is : \" << string;\n}";
cout<<endl<<"\n\n\npress 1 to run the program : ";
cin>>z;
if(z==1)
{cleardevice();
gotoxy(1,1);
stlower();}}
if(f==5)
{op=rand() %10;
setbkcolor(op);
cout<<"#include <iostream.h>\n#include <stdio.h>\n#include <conio.h>\nvoid main()\n{\nchar string[60];\nint i = 0;\nclrscr();\ncout << \"Enter any string : \";\ngets(string);\nwhile (string[i] != \'\\0\')\n{\n// If character is between a and z (97 is ASCII value of a and 122 is of z)\nif (string[i] >= 97 && string[i] <= 123)\nstring[i]-=32; // Add 32 to its ASCII value (to get its lowercase equivalent\ni++;\n}\ncout << \"The uppercase string is : \" << string;\n}";
cout<<"\n\n\npress 1 to run program : ";
cin>>z;
if(z==1)
{cleardevice();
gotoxy(1,1);
stupper();}
}}
getch();
cleardevice();
gotoxy(1,1);
cout<<"press y to go to main menu";
char chi;
cin>>chi;
op=rand() %10;
setbkcolor(op);
if(chi=='y')
{
goto start;
}




gotoxy(1,7);
cleardevice();
cout<<"        ********************************************************** \n";
cout<<"        *                                                        * \n";
cout<<"        *   -------                      |                |      * \n";
cout<<"        *      |   |                     |    /           |      * \n";
cout<<"        *      |   |                     |  /    ______   |      * \n";
cout<<"        *      |   |-----  ____   \\----  |/     |         |      * \n";
cout<<"        *      |   |    | |    |   |  |  |\\     |_____    |      * \n";
cout<<"        *      |   |    | |    |   |  |  |  \\         |   |      * \n";
cout<<"        *      |   |    | |____|   |  |  |    \\  _____|   |      * \n";
cout<<"        *                      \\                                 * \n";
cout<<"        *                                                        * \n";
cout<<"        ********************************************************** \n";
delay(2000);
}
