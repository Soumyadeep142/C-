#include <iostream.h>
#include <conio.h>
void main()
{
 clrscr();
 int a,b,c;
 cout<<"Give first number: ";
 cin>>a;
 cout<<"Give second number: ";
 cin>>b;
 cout<<"Give third number: ";
 cin>>c;
 if ((a>b) && (a>c))
 cout<<a<<" is the largest.";
 else if ((b>c) && (b>a))
 cout<<b<<" is the largest.";
 else if ((c>a) && (c>b))
 cout<<c<<" is the largest.";
 getch();
}