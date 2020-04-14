#include<iostream.h>
#include<conio.h>
#include<string.h>
#include<stdio.h>
#include<graphics.h>
void main()
{
int gd= DETECT,gm;
initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
setbkcolor(3);
cleardevice();
int a,b,c,d,e,f,g,x;
cout<<"1..BRANCHING IN C++"<<endl<<"2..LOOPING IN C++"<<endl<<"3..DEVICE AND CHARACTER"<<endl<<"4..FUNCTIONS IN C++"<<endl<<"5..ARRAYS IN C++"<<endl<<"6..STRING HANDLING IN C++"<<endl<<"7..STRUCTURES IN C++"<<endl<<"ENTER THE CHAPTER NUMBER"<<endl;
cin>>x;
{
if(x==1)
cout<<"1..PROGRAM TO PRINT WHETHER THE NO IS ODD OR EVEN"<<endl<<"2..PROAGRAM TO FIND THE ROOTS OF A QUADRATIC EQUATION"<<endl<<"3..PROAGRAM TO FIND LARGEST BETWEEN THREE INTEGERS USING CONDITIONAL OPERATORS"<<endl<<"4..PROAGRAM TO INPUT TWO NUMBERS AND FIND THEIR SUM AND DIFFERSNCE USING SWITCH STATEMENT"<<endl<<"5..PROAGRAM TO FIND AREA OF CIRCLE , RECTANGLE , SQUARE AND CIRCUMFERENCE OF CIRCLE"<<endl<<"ENTER THE PROAGRAM NO YOU WANT TO DISPLAY"<<endl;
cin>>a;
if(a==1)
cout<<"#include<iostream.h>"<<endl<<"#include<conio.h>"<<endl<<"void main()"<<endl<<"{"<<endl<<"int num;"<<endl<<"cout<<\"enter any number\";"<<endl<<"cin>>num;"<<endl<<"if((num%2)==0)"<<endl<<"cout<<\"number is even\";"<<endl<<"else"<<endl<<"cout<<\"number is odd\";"<<endl<<"}";
if(a==2)
cout<<"#include<iostream.h>"<<endl<<"#include<conio.h>"<<endl<<"#include<math.h>"<<endl<<"main()"<<endl<<"{"<<endl<<"int a,b,c,r1,r2,d;"<<endl<<"clrscr();"<<endl<<"cout<<\"\\n\\t   Enter the values of a,b and c:\";"<<endl<<"cin>>a>>b>>c;"<<endl<<"d=b*b-4*a*c;"<<endl<<"if(d<0)"<<endl<<"cout<<\"\\n\\t Roots are imaginary \";"<<endl<<"if(d>=0)"<<endl<<"{"<<endl<<"r1=(-b+sqrt(d))/(2*a);"<<endl<<"r2=(-b-sqrt(d))/(2*a);"<<endl<<"if(d==0)"<<endl<<"cout<<\"\\n\\t Roots are equal \";"<<endl<<"cout<<\"\\n\\t First root is \"<<r1;"<<endl<<"cout<<\"\\n\\t Second root is \"<<r2;"<<endl<<"}"<<endl<<"return 0;"<<endl<<"}";
if(a==3)
cout<<"#include<iostream.h>"<<endl<<"main()"<<endl<<"{"<<endl<<"int a,b,c,maxN;"<<endl<<"cout<<\"\\n\\t Enter the value of a:\";"<<endl<<"cin>>a;"<<endl<<"cout<<\"\\n\\t Enter the value of b:\";"<<endl<<"cin>>b;"<<endl<<"cout<<\"\\n\\t Enter the value of c:\";"<<endl<<"cin>>c;"<<endl<<"maxN=(a>0)?(a>c?:c):(b>c?b:c);"<<endl<<"cout<<endl<<\"\\n\\t Maximum number is \"<<maxN;"<<endl<<"return 0"<<endl<<"}";
if(a==4)
cout<<"#include<iostream.h>\nmain()\n{\nint num1,num2,opt,sum,diff;\ncout<<\"enter first no.\";\ncin>>num1;\ncout<<\"enter second no.\";\ncin>>num2;\ncout<<\"1-addition\";\ncout<<\"\\n2-difference\";\ncout<<\"\\n\\nenter choice from above\";\ncin>>opt;\nswitch(opt)\n{\ncase 1:\n   sum=num1+num2;\nbreak;\ncase2:\nif(num1>num2)\ndiff=num1-num2;\nelse\ndiff=num2-num1;\nbreak;\ndefault:\ncout<<\"\\n invalid option selected\";\n}";
getch();
cout<<"\nif(opt==1)\ncout<<\"the sum of\"<<num1<<\"and\"<<num2<<\"is =\"<<sum;\nelse\nif(opt==2)\ncout<<\"the diff between\"<<num1<<\"and\"<<num2<<\"is =\"<<diff;\nreturn 0;\n}\n";
if(a==5)
if(x==2)
cout<<"B";
if(x==3)
cout<<"C";
if(x==4)
cout<<"D";
if(x==5)
cout<<"E";
if(x==6)
cout<<"F";
if(x==7)
cout<<"G";
}
getch();
}
